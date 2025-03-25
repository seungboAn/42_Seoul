#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap(std::string name);
        FragTrap(void);
        FragTrap(const FragTrap& ft);
        ~FragTrap(void);
        FragTrap& operator = (const FragTrap& ft);
        
        void highFivesGuys(void);
};

#endif