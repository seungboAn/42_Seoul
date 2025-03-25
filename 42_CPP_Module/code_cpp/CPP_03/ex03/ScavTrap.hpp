#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

# define S_HP 100
# define S_EP 50
# define S_AD 20

class ScavTrap : virtual public ClapTrap
{
    public:
        ScavTrap(std::string name);
        ScavTrap(void);
        ScavTrap(const ScavTrap& st);
        ~ScavTrap();
        ScavTrap& operator = (const ScavTrap& st);

        void takeDamage(unsigned int amount);
        void attack(std::string const& target);
        void guardGate();

    private:
        unsigned int _guard_mode;
};

#endif