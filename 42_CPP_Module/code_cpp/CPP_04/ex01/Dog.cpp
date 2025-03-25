#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "Dog constructor called." << std::endl;
    _brain = new Brain();
}

Dog::~Dog()
{
    std::cout << "Dog destructor called." << std::endl;
    delete _brain;
    _brain = NULL;
}

Dog::Dog(const Dog &dog)
{ 
    *this = dog;
    std::cout << "Dog Copy constructor called." << std::endl;
}

// 얕은 복사
// Dog& Dog::operator = (const Dog &dog)
// {
//     if (this == &dog)
//         return (*this);
//     _type = dog._type;
//     if (_brain)
//     {
//         delete _brain;
//         _brain = NULL;
//     }
//     _brain = new Brain();
//     _brain = dog._brain;
//     return (*this);
// }

// 깊은 복사
Dog& Dog::operator = (const Dog &dog)
{
     if (this == &dog)
        return (*this);
    _type = dog._type;
    if (_brain)
    {
        delete _brain;
        _brain = NULL;
    }
    _brain = new Brain();
    for (int i = 0; i < 100; i++)
        _brain->setIdea(i, dog.getBrain()->getIdea(i));
    return (*this);
}

Brain *Dog::getBrain() const
{
    return (_brain);
}

void Dog::makeSound() const
{
    std::cout << "Dog ! Dog ! Dog !" << std::endl;
}