#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _Name(name), _Hp(10), _Ep(10), _Ad(0)
{
    std::cout << "ClapTrap " << _Name << " constructor called" << std::endl;
}

ClapTrap::ClapTrap(void) : _Name("Default"), _Hp(10), _Ep(10), _Ad(0)
{
    std::cout << "ClapTrap " << _Name << " constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << _Name << " destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& ct)
{
    *this = ct;
    std::cout << "ClapTrap " << _Name << " Copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator = (const ClapTrap& ct)
{
    if (this == &ct)
	    return (*this);
    _Name = ct._Name;
    _Hp = ct._Hp;
    _Ep = ct._Ep;
    _Ad = ct._Ad;
    return (*this);
}

void ClapTrap::attack(std::string const & target)
{
    std::cout << "ClapTrap " << _Name << " attack " << target <<
    " causing " << _Ad << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    _Hp -= amount;
    std::cout << "ClapTrap " << _Name << " take " << amount << " damage. "
    << "Now, ClapTrap " << _Name << " Hp: " << _Hp << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    _Hp += amount;;
    std::cout << "ClapTrap " << _Name << " repaired " << amount << " Hp. "
    << "Now, ClapTrap " << _Name << " Hp: " << _Hp << std::endl;
}
