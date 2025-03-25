#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "Cat constructor called." << std::endl;
    _brain = new Brain();
}

Cat::~Cat()
{
    std::cout << "Cat destructor called." << std::endl;
    delete _brain;
    _brain = NULL;
}

Cat::Cat(const Cat &cat)
{
    *this = cat;
    std::cout << "Cat Copy constructor called." << std::endl;
}

// 얕은 복사
// Cat& Cat::operator = (const Cat &cat)
// {
//     if (this == &cat)
//         return (*this);
//     _type = cat._type;
//     if (_brain)
//     {
//         delete _brain;
//         _brain = NULL;
//     }
//     _brain = new Brain();
//     _brain = cat._brain;
//     return (*this);
// }

// 깊은 복사
Cat& Cat::operator = (const Cat &cat)
{
    if (this == &cat)
        return (*this);
    _type = cat._type;
    if (_brain)
    {
        delete _brain;
        _brain = NULL;
    }
    _brain = new Brain();
    for (int i = 0; i < 100; i++)
        _brain->setIdea(i, cat.getBrain()->getIdea(i));
    return (*this);
}

Brain *Cat::getBrain() const
{
    return (_brain);
}

void Cat::makeSound() const
{
    std::cout << "Cat ! Cat ! Cat !" << std::endl;
}