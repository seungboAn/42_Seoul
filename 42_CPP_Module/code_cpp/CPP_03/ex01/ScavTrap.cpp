#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) 
{
    _Hp = 100;
    _Ep = 50;
    _Ad = 20;
    _guard_mode = 0;
    std::cout << "ScavTrap " << _Name << " constructor called" << std::endl;
}

ScavTrap::ScavTrap(void) : ClapTrap()
{
    _Hp = 100;
    _Ep = 50;
    _Ad = 20;
    _guard_mode = 0;
    std::cout << "ScavTrap " << _Name << " constructor called" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap " << _Name << " destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& st) : ClapTrap(st)
{
    *this = st;
    std::cout << "ScavTrap " << _Name << " Copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator = (const ScavTrap& st)
{
    if (this == &st)
	    return (*this);
    ClapTrap::operator=(st);
    _guard_mode = st._guard_mode;
    return (*this);
}

void ScavTrap::guardGate()
{
    if (_Ep >= 25)
    {
        _guard_mode = 1;
        _Ep -= 25;
        std::cout << "ScavTrap " << _Name << " have enterred in Gate keeper mode." << std::endl;
    }
    else
        std::cout << "ScavTrap " << _Name << " have not enough Energy." << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
    if (_guard_mode == 1)
    {
        std::cout << "ScavTrap " << _Name << " defended the attack." << std::endl;
        _guard_mode = 0;
    }
    else
    {
        _Hp -= amount;
        std::cout << "ScavTrap " << _Name << " take " << amount << " damage. "
        << "Now, ScavTrap " << _Name << " Hp: " << _Hp << std::endl;
    }
}

void ScavTrap::attack(std::string const & target)
{
    std::cout << "ScavTrap " << _Name << " attack " << target <<
    " causing " << _Ad << " points of damage!" << std::endl;
}
