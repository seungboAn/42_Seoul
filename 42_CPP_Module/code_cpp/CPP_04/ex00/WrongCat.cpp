#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    std::cout << "WrongCat constructor called." << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called." << std::endl;
}

WrongCat::WrongCat(const WrongCat &wcat)
{
    *this = wcat;
    std::cout << "WrongCat Copy constructor called." << std::endl;
}

WrongCat& WrongCat::operator = (const WrongCat &wcat)
{
    if (this == &wcat)
        return (*this);
    _type = wcat._type;
    return (*this);
}

void WrongCat::makeSound() const
{
    std::cout << "WrongCat ! WrongCat ! WrongCat !" << std::endl;
}