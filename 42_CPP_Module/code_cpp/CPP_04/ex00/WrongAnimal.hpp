#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal
{
    public:
        WrongAnimal();
        WrongAnimal(std::string name);
        ~WrongAnimal();
        WrongAnimal(const WrongAnimal &wani);
        WrongAnimal &operator= (const WrongAnimal &wani);

        std::string getType() const;
        void makeSound() const;

    protected:
        std::string _type;
};

#endif