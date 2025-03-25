// exceptions

#include "Bureaucrat.hpp"

int main ()
{
	try
	{
		std::cout << " [ TEST constructor and get func] " << std::endl;
		Bureaucrat bur("Kangin", 55);
		std::cout << "getName: " << bur.getName() << std::endl;
		std::cout << "getGrade: " << bur.getGrade() << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		std::cout << " [ TEST Copy constructor ] " << std::endl;
		Bureaucrat bur2("Messi", 149);
		Bureaucrat bur3(bur2);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		std::cout << " [ TEST increment, decrement func ] " << std::endl;
		Bureaucrat bur4("James", 1);
		std::cout << bur4 << std::endl;
		bur4.decrementGrade();
		std::cout << bur4 << std::endl;
		bur4.incrementGrade();
		std::cout << bur4 << std::endl;
		bur4.incrementGrade();
		std::cout << bur4 << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		std::cout << " [ Check invalid Grade ] " << std::endl;
		Bureaucrat bur5("invalidGrade", 151);
		Bureaucrat bur6("invalidGrade2", 0);
		std::cout << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}