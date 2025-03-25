#include "Base.hpp"

Base * generate(void);
void identify(Base* p);
void identify(Base& p);

int main(void)
{
	Base *basePtr = generate();
	Base &baseRef(*basePtr);

	identify(basePtr);
	identify(baseRef);
	std::cout << std::endl;
	
    delete basePtr;
    system("leaks a.out");
	return (0);
}