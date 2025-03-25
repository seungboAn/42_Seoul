#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "Cat constructor called." << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called." << std::endl;
}

Cat::Cat(const Cat &cat)
{
    *this = cat;
}

Cat& Cat::operator = (const Cat &cat)
{
    if (this == &cat)
        return (*this);
    _type = cat._type;
    return (*this);
}

void Cat::makeSound()
{
    std::cout << "Cat ! Cat ! Cat !" << std::endl;
}