#include <iostream>
#include <exception>

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

void identify(Base* p)
{
	std::cout << " [ Pointer Type: "; 
	A *a = dynamic_cast<A*>(p);
	if (a != NULL)
		std::cout << "Class A ] " << std::endl;
	B *b = dynamic_cast<B*>(p);
	if (b != NULL)
		std::cout << "Class B ]" << std::endl;
	C *c = dynamic_cast<C*>(p);
	if (c != NULL)
		std::cout << "Class C ]" << std::endl;
}

void identify(Base& p)
{
	std::cout << " [ Reference Type: "; 
	try
	{
		A a = dynamic_cast<A&>(p);
		std::cout << "Class A ] " << std::endl;
	}
	catch(const std::exception& e)
	{
	}
	try
	{
		B b = dynamic_cast<B&>(p);
		std::cout << "Class B ]" << std::endl;
	}
	catch(const std::exception& e)
	{
	}
	try
	{
		C c = dynamic_cast<C&>(p);
		std::cout << "Class C ] " << std::endl;
	}
	catch(const std::exception& e)
	{
	}
}