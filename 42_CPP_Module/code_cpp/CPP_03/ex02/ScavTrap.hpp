#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
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