#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    std::cout << " [ TEST Shallow or Deep Copy ] " << std::endl;
	Dog *dog1 = new Dog();
	Cat *cat1 = new Cat();
    std::cout << std::endl;
	Dog *dog2 = new Dog(*dog1);
	Cat *cat2 = new Cat(*cat1);
    std::cout << std::endl;
    std::cout << "dog1 address: " << dog1->getBrain() << std::endl;
    std::cout << "dog2 address: " << dog2->getBrain() << std::endl;
    std::cout << std::endl;
	delete dog1;
	delete dog2;
    std::cout << std::endl;
    std::cout << "cat1 address: " << cat1->getBrain() << std::endl;
    std::cout << "cat2 address: " << cat2->getBrain() << std::endl;
    std::cout << std::endl;
	delete cat1;
	delete cat2;
    std::cout << std::endl;

    std::cout << " [ TEST leak ] " << std::endl;
	Animal *animals[6];
	for (int i = 0; i < 6; i++)
	{
		if (!(i % 2))
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
    std::cout << std::endl;
	for (int i = 0; i < 6; i++)
    {
        delete animals[i];
        std::cout << std::endl;
    }
	system("leaks a.out");
	return (0);
}

