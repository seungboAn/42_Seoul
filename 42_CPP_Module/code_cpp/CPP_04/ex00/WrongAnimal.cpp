#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(std::string name) : _type(name)
{
    std::cout << "WrongAnimal constructor called." << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &ani)
{ 
    *this = ani;
    std::cout << "WrongAnimal Copy constructor called." << std::endl;
}

WrongAnimal& WrongAnimal::operator = (const WrongAnimal &ani)
{
    if (this == &ani)
	    return (*this);
    _type = ani._type;
    return (*this);
}

std::string WrongAnimal::getType() const
{
    return _type;
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal ! WrongAnimal ! WrongAnimal !" << std::endl;
}