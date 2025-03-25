// exceptions

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main ()
{
	try
	{
		std::cout << " [ TEST Intern Make ShrubberyCreationForm ] " << std::endl;
		Intern someRandomIntern;
		Bureaucrat bur("Son", 1);
		Form* scf;

		scf = someRandomIntern.makeForm("shrubbery creation", "James");
		bur.signForm(*scf);
		bur.executeForm(*scf);
		delete scf;
		scf = NULL;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		std::cout << " [ TEST Intern Make RobotomyRequestForm ] " << std::endl;
		Intern someRandomIntern;
		Bureaucrat bur("Son", 1);

		Form* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		bur.signForm(*rrf);
		bur.executeForm(*rrf);
		delete rrf;
		rrf = NULL;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		std::cout << " [ TEST Intern Make PresidentialPardonForm ] " << std::endl;
		Intern someRandomIntern;
		Bureaucrat bur("Son", 1);

		Form* ppf;
		ppf = someRandomIntern.makeForm("presidential pardon", "Tom");
		bur.signForm(*ppf);
		bur.executeForm(*ppf);
		delete ppf;
		ppf = NULL;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		std::cout << " [ TEST Intern Make unknown form ] " << std::endl;
		Intern someRandomIntern;
		Form* uff;
		Bureaucrat bur("Son", 1);

		uff = someRandomIntern.makeForm("unknown form", "Amy");
		bur.signForm(*uff);
		bur.executeForm(*uff);
		delete uff;
		uff = NULL;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	// system("leaks a.out");
	return 0;
}