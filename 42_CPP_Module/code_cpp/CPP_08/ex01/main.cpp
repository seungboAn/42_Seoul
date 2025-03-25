#include "span.hpp"

int main(void)
{
	std::cout << " [ TEST subject ] " << std::endl;
	Span sp(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	try
	{
		sp.addNumber(42); // throw
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	
	std::cout << " [ TEST addNumber and Span ] " << std::endl;
	std::vector<int> v;
	for (int i = 0; i < 10000; i++)
		v.push_back(i);
	Span sp2(10000);
    sp2.addNumber(v.begin(), v.end());

	std::cout << sp2.shortestSpan() << std::endl;
	std::cout << sp2.longestSpan() << std::endl;
	try
	{
		sp2.addNumber(42);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;

	std::cout << " [ TEST Span Exception ] " << std::endl;
	Span sp3(3);
	sp3.addNumber(1);
	try
	{
		std::cout << sp3.shortestSpan() << std::endl;
		std::cout << sp3.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	// system("leaks a.out");
	return 0;
}