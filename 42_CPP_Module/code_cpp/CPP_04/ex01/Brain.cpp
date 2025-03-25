#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructor called." << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called." << std::endl;
}

Brain::Brain(const Brain &brain)
{ 
    *this = brain;
    std::cout << "Brain Copy constructor called." << std::endl;
}

Brain& Brain::operator = (const Brain &brain)
{
    if (this == &brain)
        return (*this);
    for (int i = 0; i < 100; i++)
		ideas[i] = brain.ideas[i];
    return (*this);
}

std::string Brain::getIdea(int idx) const
{
    return (ideas[idx]);
}

void Brain::setIdea(int idx, std::string idea)
{
    ideas[idx] = idea;
}