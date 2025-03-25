// exceptions

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main ()
{
	try
	{
		std::cout << " [ TEST ShrubberyCreationForm ] " << std::endl;
		Bureaucrat bur2("Ronaldo", 140);
		Bureaucrat bur("Son", 3);
		ShrubberyCreationForm sform("sform");

		bur2.signForm(sform); 
		bur2.executeForm(sform); // Exception case
		bur.signForm(sform);
		bur.executeForm(sform);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		std::cout << " [ TEST RobotomyRequestForm ] " << std::endl;
		Bureaucrat bur("Son", 3);
		Bureaucrat bur2("Ronaldo", 50);
		RobotomyRequestForm rform("rform");

		bur.signForm(rform);
		bur.executeForm(rform);
		bur2.signForm(rform);
		bur2.executeForm(rform);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		std::cout << " [ TEST PresidentialPardonForm ] " << std::endl;
		Bureaucrat bur("Son", 3);
		Bureaucrat bur2("Ronaldo", 7);
		PresidentialPardonForm pform("pform");

		bur.signForm(pform);
		bur.executeForm(pform);
		bur2.signForm(pform);
		bur2.executeForm(pform);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}