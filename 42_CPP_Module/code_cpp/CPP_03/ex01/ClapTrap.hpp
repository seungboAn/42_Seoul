#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
    public:
        ClapTrap(std::string name);
        ClapTrap(void);
        ClapTrap(const ClapTrap& ct);
        ~ClapTrap(void);
        ClapTrap& operator = (const ClapTrap& ct);

        void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

    protected:
        std::string _Name;
        unsigned int _Hp;
        unsigned int _Ep;
        unsigned int _Ad;
};

#endif