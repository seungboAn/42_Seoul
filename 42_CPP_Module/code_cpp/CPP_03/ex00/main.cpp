#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("a");
    ClapTrap b("b");
    ClapTrap c(b);

    std::cout << std::endl;
    
    a.attack("b");
    b.takeDamage(5);
    b.beRepaired(20);

    std::cout << std::endl;
    return 0;
}