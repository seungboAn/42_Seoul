#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        ~WrongCat();
        WrongCat (const WrongCat &wcat);
        WrongCat &operator= (const WrongCat &wcat);

        void makeSound() const;
};

#endif