#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <exception>
# include <algorithm>
# include <vector>

class Span
{
	public:
		Span();
		~Span();
		Span(unsigned int N);
		Span(Span& copy);
		Span& operator = (const Span& span);

		void addNumber(int number);

		template <typename T>
		void addNumber(T begin, T end)
		{
			for (; begin != end; begin++)
				addNumber(*begin);
		}
		std::vector<int> getV() const;
		int shortestSpan(void) const;
		int longestSpan(void) const;

		class FullException : public std::exception
		{
			const char * what() const throw();
		};
		class NoSpanException : public std::exception
		{
			const char *what() const throw();
		};

	private:
		std::vector<int> _v;
		unsigned int _size;
};

#endif