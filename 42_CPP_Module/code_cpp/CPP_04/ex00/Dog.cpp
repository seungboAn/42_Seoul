#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "Dog constructor called." << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called." << std::endl;
}

Dog::Dog(const Dog &dog)
{ 
    *this = dog;
    std::cout << "Dog Copy constructor called." << std::endl;
}

Dog& Dog::operator = (const Dog &dog)
{
     if (this == &dog)
        return (*this);
    _type = dog._type;
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "Dog ! Dog ! Dog !" << std::endl;
}