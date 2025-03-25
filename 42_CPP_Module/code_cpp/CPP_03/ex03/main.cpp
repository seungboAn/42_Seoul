#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap a("a");
    std::cout << std::endl;
    std::cout << "[ Check DiamondTrap Name, ClapTrap::Name ]" << std::endl;
    a.whoAmI();
    std::cout << std::endl;

    std::cout << "[ Check DiamondTrap Hp ]" << std::endl;
    a.beRepaired(10);
    std::cout << std::endl;

    std::cout << "[ Check DiamondTrap Ep ]" << std::endl;
    a.guardGate();
    a.guardGate();
    a.guardGate();
    std::cout << std::endl;

    std::cout << "[ Check DiamondTrap Ad and attack func ]" << std::endl;
    a.attack("someone");
    std::cout << std::endl;

    return (0);
}