#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include <cstdlib>
#include <ctime>
#include <iostream>

Base* generate(void)
{
    Base *ptr(NULL);

    srand((unsigned int)time(NULL));
	int num = rand() % 3;
	if (num == 0)
    {
        ptr = new A();
        std::cout << "A generated." << std::endl;
    }
    else if (num == 1)
	{
        ptr = new B();
        std::cout << "B generated." << std::endl;
    }
    else if (num == 2)
    {
        ptr = new C();
        std::cout << "C generated." << std::endl;
    }
    return ptr;
}