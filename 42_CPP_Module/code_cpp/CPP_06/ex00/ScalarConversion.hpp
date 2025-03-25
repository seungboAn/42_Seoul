#ifndef SCALARCONVERSION_HPP
# define SCALARCONVERSION_HPP

# include <iostream>
# include <string>
# include <exception>
# include <cmath>

class ScalarConversion
{
	public:

		ScalarConversion();
		ScalarConversion(std::string var);
		~ScalarConversion();
		ScalarConversion(const ScalarConversion& sc);
		ScalarConversion &operator = (const ScalarConversion& sc);
		
        void toChar() const;
        void toInt() const;
        void toFloat() const;
        void toDouble() const;

		class ImpossibleException : public std::exception
		{
			public:
				virtual const char* what(void) const throw();
		};
		class NonDisplayException : public std::exception
		{
			public:
				virtual const char* what(void) const throw();
		};

	private:
        std::string _Var;
};

#endif