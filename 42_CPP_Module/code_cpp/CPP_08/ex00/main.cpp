#include "easyfind.hpp"

int main(void)
{
	std::cout << " [ TEST vector and iter ] " << std::endl;
	// create vector
	std::vector<int> v;
	for (int i = 0; i < 5; i++)
		v.push_back(i);
	
	// iter
	std::vector<int>::iterator iter = v.begin();
	while(iter < v.end())
	{
		std::cout << "*iter: " << *iter << std::endl;
		iter++;
	}
	std::cout << std::endl;
	std::cout << " [ TEST easyfind ] " << std::endl;
	try
	{
		std::vector<int>::iterator iter1 = easyfind(v, 2);
		std::cout << "*iter1: " << *iter1 << std::endl;
		std::vector<int>::iterator iter2 = easyfind(v, 10);
		std::cout << "*iter2: " << *iter2 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	// system("leaks a.out");
	return (0);
}