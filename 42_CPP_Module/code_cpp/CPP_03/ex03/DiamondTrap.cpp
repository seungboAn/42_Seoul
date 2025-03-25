#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name +  "_clap_name")
{
    _Name = name;
    _Hp = F_HP;
    _Ep = S_EP;
    _Ad = F_AD;
    std::cout << "DiamondTrap " << _Name << " constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(void) : ClapTrap()
{
    _Name = "Default";
    ClapTrap::_Name += "_clap_name";
    _Hp = F_HP;
    _Ep = S_EP;
    _Ad = F_AD;
    std::cout << "DiamondTrap " << _Name << " constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
    std::cout << "DiamondTrap " << _Name << " destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& dt) : ClapTrap(dt)
{
    *this = dt;
    std::cout << "DiamondTrap " << _Name << " Copy constructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator = (const DiamondTrap& dt)
{
    if (this == &dt)
	    return (*this);
    ClapTrap::operator=(dt);
    _Name = dt._Name;
    return (*this);
}

void DiamondTrap::whoAmI(void)
{
    std::cout << "DiamondTrap name is: " << _Name << std::endl;
    std::cout << "ClapTrap name is: " << ClapTrap::_Name << std::endl;
}
