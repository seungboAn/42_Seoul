#include "FragTrap.hpp"

int main()
{
    FragTrap a("a");
    FragTrap b("b");
    FragTrap c;
    FragTrap d(c);
    std::cout << std::endl;

    a.attack("b");
    b.takeDamage(20);
    b.beRepaired(20);
    std::cout << std::endl;
    
    a.highFivesGuys();
    b.highFivesGuys();
    std::cout << std::endl;
    return 0;
}