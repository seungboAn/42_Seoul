#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    // Correct example.
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete(meta);
	meta = NULL;
	delete(i);
	i = NULL;
	delete(j);
	j = NULL;

	// Wrong example.
	std::cout << std::endl;
	std::cout << "------------ Wrong Example ------------" << std::endl;
	const WrongAnimal *meta2 = new WrongAnimal();
	const WrongAnimal *i2 = new WrongCat();
	std::cout << i2->getType() << " " << std::endl;
	i2->makeSound();
	meta2->makeSound();

	delete(meta2);
	meta2 = NULL;
	delete(i2);
	i2 = NULL;

	system("leaks a.out");
	return (0);
}

