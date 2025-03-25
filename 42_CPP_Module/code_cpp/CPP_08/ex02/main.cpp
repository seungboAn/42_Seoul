#include "mutantstack.hpp"

int main(void)
{
	std::cout << " [ Test push and pop ] " << std::endl;
	MutantStack<int> mstack;
	mstack.push(17);
	mstack.push(5);
	std::cout << mstack.top() << std::endl; // 5
	mstack.pop();
	std::cout << mstack.top() << std::endl; // 17
	std::cout << mstack.size() << std::endl; // stack size 1
	std::cout << std::endl;
	std::cout << " [ Test iterator ] " << std::endl;
	mstack.push(2);
	mstack.push(3);
	mstack.push(10);
	mstack.push(737);
	mstack.push(42);
	std::cout << "Size of mstack: " << mstack.size() << std::endl; // stack size 6
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	std::cout << "mstack begin: " << *it << std::endl; // 17
	std::cout << "mstack last: " << *(ite - 1) << std::endl; // 42
	std::cout << "top of mstack : " << mstack.top() << std::endl; // 42
	std::cout << std::endl;
	std::cout << " [ Test loop ] " << std::endl;
	++it;
	std::cout << "after ++: " << *it << std::endl;
	--it;
	std::cout << "after --: " << *it << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::cout << std::endl;
	std::cout << " [ Test reverse_iterator ] " << std::endl;
	MutantStack<int>::reverse_iterator rit = mstack.rbegin();
	MutantStack<int>::reverse_iterator rite = mstack.rend();
	while (rit != rite)
	{
		std::cout << *rit << std::endl;
		++rit;
	}
	std::cout << std::endl;
	// system("leaks a.out");
	return 0;
}