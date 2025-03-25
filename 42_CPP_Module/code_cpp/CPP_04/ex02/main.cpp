#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    // 추상 클래스의 독립적인 객체 생성 시 에러 발생
    // Animal *ani = new Animal();

    Animal *j = new Dog();
    Animal *i = new Cat();
    std::cout << std::endl;
    j->makeSound();
    i->makeSound();

    std::cout << std::endl;
    delete i;
    delete j;
    i = NULL;
    j = NULL;
    return 0;
}