#include "ScalarConversion.hpp"

ScalarConversion::ScalarConversion()
{

}

ScalarConversion::ScalarConversion(std::string var)
{
    _Var = var;
}

ScalarConversion::~ScalarConversion()
{

}

ScalarConversion::ScalarConversion(const ScalarConversion &sc)
{
    *this = sc;
}

ScalarConversion& ScalarConversion::operator=(const ScalarConversion &sc)
{
    if (this == &sc)
		return (*this);
	_Var = sc._Var;
	return (*this);
}

void ScalarConversion::toChar() const
{
    std::cout << "char: ";
    if (_Var.length() == 1 && !isnumber(_Var[0]))
        std::cout << "'" << static_cast<char>(_Var[0]) << "'" << std::endl;
    else
    {
        double tmp = atof(_Var.c_str());
        if (CHAR_MAX < tmp || CHAR_MIN > tmp || isnan(tmp))
            throw (ImpossibleException());
        else if (!(32 <= tmp && tmp <= 126))
            throw (NonDisplayException());
        else
            std::cout << "'" << static_cast<char>(tmp) << "'" << std::endl;
    }
}

void ScalarConversion::toInt() const
{
    std::cout << "int: ";
    if (_Var.length() == 1 && !isnumber(_Var[0]))
        std::cout << static_cast<int>(_Var[0]) << std::endl;
    else
    {
        double tmp = atof(_Var.c_str());
        if (tmp > INT_MAX || tmp < INT_MIN || isnan(tmp))
            throw (ImpossibleException());
        else
            std::cout << static_cast<int>(tmp) << std::endl;
    }
}

void ScalarConversion::toFloat() const
{
    std::cout << "float: ";
    if (_Var.length() == 1 && !isnumber(_Var[0]))
    {
        std::cout << std::fixed; 
        std::cout.precision(1);
        std::cout << static_cast<float>(_Var[0]) << "f" << std::endl;
    }
    else
    {
        double tmp = atof(_Var.c_str());
        if ((tmp > __FLT_MAX__ || tmp < -__FLT_MAX__ ) && !isinf(tmp))
		    throw (ImpossibleException());
        else
        {
            std::cout << std::fixed; 
            std::cout.precision(1);
            std::cout << static_cast<float>(tmp) << "f" << std::endl;
        }
    }
}

void ScalarConversion::toDouble() const
{
    std::cout << "double: ";
    if (_Var.length() == 1 && !isnumber(_Var[0]))
    {
        std::cout << std::fixed; 
        std::cout.precision(1);
        std::cout << static_cast<double>(_Var[0]) << std::endl;
    }
    else
    {
        double tmp = atof(_Var.c_str());
        if ((tmp > __DBL_MAX__ || tmp < -__DBL_MAX__) && !isinf(tmp))
		    throw (ImpossibleException());
        else
        {
            std::cout << std::fixed; 
            std::cout.precision(1);
            std::cout << static_cast<double>(tmp) << std::endl;
        }
    }
}

const char* ScalarConversion::ImpossibleException::what() const throw()
{
	return ("Impossible");
}

const char* ScalarConversion::NonDisplayException::what() const throw()
{
	return ("Non displayable");
}