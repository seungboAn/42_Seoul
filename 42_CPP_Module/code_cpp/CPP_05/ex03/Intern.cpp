#include "Intern.hpp"

Intern::Intern()
	{}

Intern::~Intern()
	{}

Intern::Intern(const Intern& copy)
{
	*this = copy;
}

Intern &Intern::operator = (const Intern& intern)
{
	if (this == &intern)
		return (*this);
	return (*this);
}

Form* Intern::shrubberyMake(std::string target)
{
	Form *form = new ShrubberyCreationForm(target);
	return form;
}

Form* Intern::robotomyMake(std::string target)
{
	Form *form = new RobotomyRequestForm(target);
	return form;
}

Form* Intern::presidentialMake(std::string target)
{
	Form *form = new PresidentialPardonForm(target);
	return form;
}

Form* Intern::makeForm(std::string name, std::string target)
{
	Form *form;
	std::string arr[3] = { "shrubbery creation", "robotomy request", "presidential pardon"};
	Form* (Intern::*ptr[])(std::string) = { &Intern::shrubberyMake, &Intern::robotomyMake, &Intern::presidentialMake};

	for (int i = 0; i < 3; i++)
	{
		if (name == arr[i])
		{
			form = ((this->*ptr[i])(target));
			std::cout << "Intern creates " << form->getName() << std::endl;
			return form;
		}
	}
	throw (InternException());
	return NULL;
}

const char* Intern::InternException::what() const throw()
{
	return ("Intern Cannot makes form");
}