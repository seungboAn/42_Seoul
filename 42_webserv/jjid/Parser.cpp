#include "Parser.hpp"

Parser::Parser()
{
    locFlag = 0;
}

std::string Parser::getConfig()
{
    return (config);
}

int Parser::getLocFlag()
{
    return (locFlag);
}

void Parser::setConfig(std::string config)
{
    this->config = config;
}           

void Parser::setLocFlag(int flag)
{
    this->locFlag = flag;
}

void Parser::insertExistKey(std::string key, std::vector<std::string> val)
{
    if (locFlag == 0)
        keyValueMap.find(key)->second.insert(keyValueMap.find(key)->second.end(), val.begin(), val.end());
    else if (locFlag == 1)
        locMap.find(key)->second.insert(locMap.find(key)->second.end(), val.begin(), val.end());
}

void Parser::insertNewKey(std::string key, std::vector<std::string> val)
{
    if (locFlag == 0)
        keyValueMap.insert(std::pair<std::string, std::vector<std::string> >(key, val));
    else if (locFlag == 1)
        locMap.insert(std::pair<std::string, std::vector<std::string> >(key, val));
}

void Parser::insertKeyValue(std::string key, std::vector<std::string> val)
{
    if (getLocFlag() == 0)
    {
        if (keyValueMap.find(key) != keyValueMap.end())
            insertExistKey(key, val);
        else
            insertNewKey(key, val);
    }
    else if (getLocFlag() == 1)
    {
        if (locMap.find(key) != locMap.end())
            insertExistKey(key, val);
        else
            insertNewKey(key, val);
    }
}

void Parser::openConfigfile(std::string confPath)
{
    std::ifstream fin(confPath);
	std::string contents;
    int size; 

	if (fin.is_open())
    {
        fin.seekg(0, std::ios::end);
        size = fin.tellg();
        contents.resize(size);
        fin.seekg(0, std::ios::beg);
        fin.read(&contents[0], size);
        setConfig(contents);
    }
	else
    {
        contents.clear();
        setConfig(contents);
    }
	fin.close();
}

std::vector<std::string> Parser::parseServerBlock(std::string config)
{
    std::vector<std::string> blockVec;
    unsigned long idx = config.find("server {");
    unsigned long idxNext = 0;
    try
	{
        if (idx == std::string::npos)
            blockVec.clear();
        else
        {
            std::string temp;
            while (idx != std::string::npos)
            {   
                idxNext = config.find("server {", idx + 1);
                temp = config.substr(idx, idxNext - idx);
                idx = idxNext;
                blockVec.push_back(temp);
            }
        }
    }
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
    return (blockVec);
}

int     Parser::checkCommentAndBlank(std::string currLine)
{
    if (currLine.size() == 0)
        return 1;
    std::vector<std::string> lineSplit = splitCurrLine(currLine);
    if (lineSplit.size() == 0)
        return 1;
    else if (lineSplit[0].find("#") != std::string::npos)
        return 1;
    return 0;
}

void    Parser::parseLocPath(std::string currLine)
{
    std::string temp = currLine;
    std::string key = "path";
    std::vector<std::string> path;
    std::vector<std::string> extension;

    int start;
    int end;
    const unsigned long extensionPos = temp.find("*.");
    if (extensionPos != std::string::npos)
    {
        start = temp.find("/");
        end = extensionPos;
        int extensionEnd = temp.find(" ", extensionPos);
        extension.push_back(temp.substr(extensionPos + 2, (extensionEnd - (extensionPos + 2))));
        locMap.insert(std::pair<std::string, std::vector<std::string> >("extension", extension));
    }
    else
    {
        start = temp.find("/");
        end = temp.find(" ", start);
    }
    path.push_back(temp.substr(start, end - start));
    if (locMap.find(key) == locMap.end())
        locMap.insert(std::pair<std::string, std::vector<std::string> >(key, path));
    else
        locMap.find(key)->second.insert(locMap.find(key)->second.end(), path.begin(), path.end());   
}

void    Parser::parseCurrLine(std::string currLine)
{
    std::vector<std::string> lineSplit = splitCurrLine(currLine);
    std::string key = lineSplit[0];
    lineSplit.erase(lineSplit.begin());
    insertKeyValue(key, lineSplit);
}

void Parser::parseAllowMethod(std::string currLine)
{
    std::vector<std::string> lineSplit = splitCurrLine(currLine);
    std::string key = lineSplit[0];
    lineSplit.erase(lineSplit.begin());

    std::vector<std::string> allowVec;
    for (unsigned long i = 0; i < lineSplit.size(); i++)
    {
        if (lineSplit[i].find("{") != std::string::npos)
            break;
        allowVec.push_back(lineSplit[i]);
    }
    insertKeyValue(key, allowVec);
}

Location Parser::initLocation()
{
    Location loc = Location();

    if (locMap.find("extension") != locMap.end())
        loc.setExtension(locMap.find("extension")->second[0]);
    if (locMap.find("cgi") != locMap.end())
    {
        loc.setLocationType(LOCATIONTYPE_CGI);
        loc.setCgiPath(locMap.find("cgi")->second[0]);
    }
    if (locMap.find("return") != locMap.end())
    {
        loc.setLocationType(LOCATIONTYPE_REDIR);
        loc.setReturnCode(atoi(locMap.find("return")->second[0].c_str())); 
        loc.setReturnUrl(locMap.find("return")->second[1]);
    }
    if (locMap.find("path") != locMap.end())
        loc.setPath(locMap.find("path")->second[0]);
    if (locMap.find("root") != locMap.end())
        loc.setRoot(locMap.find("root")->second[0]);
    if (locMap.find("index") != locMap.end())
        loc.setIndex(locMap.find("index")->second);
    if (locMap.find("error_page") != locMap.end())
        loc.setErrPage(initErrPage());
    if (locMap.find("limit_except") != locMap.end())
        loc.setAllowMethod(locMap.find("limit_except")->second);
    if (locMap.find("autoindex") != locMap.end())
        loc.setAutoIndex(locMap.find("autoindex")->second[0] == "on" ? true : false);
    if (locMap.find("client_max_body_size") != locMap.end())
        loc.setClientBodySize(atoi((locMap.find("client_max_body_size")->second[0].c_str())));
    locMap.clear();
    return (loc);
}

std::map<int, std::string> Parser::initErrPage()
{
    std::map<int, std::string> temp;
    int size;

    if (locFlag == 0)
    {
        if (keyValueMap.find("error_page") != keyValueMap.end())
        {
            size = keyValueMap.find("error_page")->second.size();
            std::string path = keyValueMap.find("error_page")->second[size - 1];
            for (int i = 0; i < size - 1; i++)
            {
                int statusCode = atoi((keyValueMap.find("error_page")->second[i].c_str()));
                temp[statusCode] = path;
            }
        }
    }
    else if (locFlag == 1)
    {
        if (locMap.find("error_page") != locMap.end())
        {
            size = locMap.find("error_page")->second.size();
            std::string path = locMap.find("error_page")->second[size - 1];
            for (int i = 0; i < size - 1; i++)
            {
                int statusCode = atoi((locMap.find("error_page")->second[i].c_str()));
                temp[statusCode] = path;
            }
        }
    }
    return (temp);
}

void    Parser::parseKeyValue(std::string content)
{
    std::vector<std::string> contSplit = charSplit(content, '\n');
    setLocFlag(0);

    for (unsigned long i = 0; i < contSplit.size(); i++)
    {   
        try
        {
            if (checkCommentAndBlank(contSplit[i]))
                continue ;
            if (contSplit[i].find("location") != std::string::npos)
            {
                parseLocPath(contSplit[i]);
                setLocFlag(1);
            }
            else if (locFlag == 1 && contSplit[i].find("}") != std::string::npos)
            {
                locations.push_back(initLocation());
                setLocFlag(0);
            }
            else if (contSplit[i].find("limit_except") != std::string::npos)
            {
                parseAllowMethod(contSplit[i]);
                if (locFlag == 1)
                    i += 2;
            }
            else if (contSplit[i].find(";") != std::string::npos)
                parseCurrLine(contSplit[i]);
        }
        catch(std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
}

void    Parser::initServer(std::vector<Server>& servers, std::string content)
{
    parseKeyValue(content);
    for (unsigned long i = 0; i < keyValueMap.find("listen")->second.size(); i++)
    {
        Server serv = Server();
        
        if (keyValueMap.find("root") != keyValueMap.end())
            serv.setRoot(keyValueMap.find("root")->second[0]);
        if (keyValueMap.find("server_name") != keyValueMap.end())
            serv.setHosts(keyValueMap.find("server_name")->second);
        if (keyValueMap.find("listen") != keyValueMap.end())
            serv.setPort(atoi((keyValueMap.find("listen")->second[i]).c_str()));
        if (keyValueMap.find("client_max_body_size") != keyValueMap.end())
            serv.setClientBodySize(atoi((keyValueMap.find("client_max_body_size")->second[0].c_str())));
        if (keyValueMap.find("index") != keyValueMap.end())
            serv.setIndex(keyValueMap.find("index")->second);
        if (keyValueMap.find("error_page") != keyValueMap.end())
            serv.setErrPage(initErrPage());
        if (keyValueMap.find("limit_except") != keyValueMap.end())
            serv.setAllowMethod(keyValueMap.find("limit_except")->second);
        if (locations.size() != 0)
            serv.setLocation(locations);
        servers.push_back(serv);
        
    }
    locations.clear();
    keyValueMap.clear();
}

std::vector<Server> Parser::makeServers()
{
    std::vector<Server> servers;
    std::vector<std::string> serverBlocks = parseServerBlock(config);
    std::vector<std::string>::iterator serverBlock = serverBlocks.begin();

    while (serverBlock != serverBlocks.end())
    {
        initServer(servers, *serverBlock);
        serverBlock++;
    }
    return (servers);
}

std::string& Parser::leftTrim(std::string& str, std::string& chars)
{
    str.erase(0, str.find_first_not_of(chars));
    return str;
}

std::string& Parser::rightTrim(std::string& str, std::string& chars)
{
    str.erase(str.find_last_not_of(chars) + 1);
    return str;
}

std::string& Parser::trimString(std::string& str, std::string& chars)
{
    
    return leftTrim(rightTrim(str, chars), chars);
}

std::string Parser::transferOneSpace(std::string str)
{
    std::string answer;
    int spaceFlag = 0;

    for (unsigned long idx = 0; idx < str.size(); idx++)
    {
        if (str[idx] == ' ')
        {
            if (!spaceFlag)
            {
                answer += str[idx];
                spaceFlag = 1;
            }
        }
        else
        {
            if (spaceFlag)
                spaceFlag = 0;
            answer += str[idx];
        }
    }
    return (answer);
}

std::vector<std::string> Parser::charSplit(std::string input, char delimiter)
{
    std::vector<std::string> answer;
    std::stringstream ss(input);
    std::string temp;
 
    while (getline(ss, temp, delimiter))
        answer.push_back(temp);
    return answer;
}

std::vector<std::string> Parser::splitCurrLine(std::string currLine)
{
    std::string charsToTrim = " ;";
    std::string cur;

    trimString(currLine, charsToTrim);
    cur = transferOneSpace(currLine);
    std::vector<std::string> lineSplit = charSplit(cur, ' ');
    return (lineSplit);
}