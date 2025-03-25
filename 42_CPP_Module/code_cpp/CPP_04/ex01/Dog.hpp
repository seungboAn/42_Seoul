#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
    public:
        Dog();
        ~Dog();
        Dog (const Dog &dog);
        Dog &operator= (const Dog &dog);
        
        Brain *getBrain() const;
        void makeSound() const;
    
    private:
        Brain *_brain;
};

#endif