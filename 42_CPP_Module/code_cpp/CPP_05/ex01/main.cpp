#include "Bureaucrat.hpp"
#include "Form.hpp"

int main ()
{
	try
	{
		std::cout << " [ TEST Bureaucrat constructor ] " << std::endl;
		Bureaucrat bur("Kangin", 42);
		std::cout << bur << std::endl;
		Bureaucrat bur2("Son", 250); // GradeTooLowException
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		std::cout << " [ TEST Form constructor ] " << std::endl;
		Form a("a", 75, 85);
		std::cout << a << std::endl;
		Form b("b", 250, 60); // GradeTooLowException
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		std::cout << " [ TEST besigned, signForm func ] " << std::endl;	
		Form c("c", 5, 5);
		Form d("d", 10, 10);
		Bureaucrat bur3("Ronaldo", 7);
		bur3.signForm(c); // GradeTooHighException
		bur3.signForm(d);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}