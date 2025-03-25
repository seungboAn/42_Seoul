#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal constructor called." << std::endl;
}

Animal::Animal(std::string name) : _type(name)
{
    std::cout << "Animal constructor called." << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called." << std::endl;
}

Animal::Animal(const Animal &ani)
{ 
    *this = ani; 
}

Animal& Animal::operator = (const Animal &ani)
{
    if (this == &ani)
	    return (*this);
    _type = ani._type;
    return (*this);
}

std::string Animal::getType() const
{
    return _type;
}

// void Animal::makeSound() const
// {
//     std::cout << "Animal ! Animal ! Animal !" << std::endl;
// }