#ifndef HEADER_HPP
# define HEADER_HPP

#include "uniHeader.hpp"

class Header
{
	protected:
		std::map <std::string, std::string > content;

	public:
	std::map <std::string, std::string >& getContent()
	{
		return (content);
	}
		
};

#endif