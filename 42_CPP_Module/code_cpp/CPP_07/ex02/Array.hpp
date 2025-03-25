#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>
# include <exception>

template <typename T> 
class Array
{
    public:
        Array()
        {
            _arr = NULL;
            _arrSize = 0;
            std::cout << "no parameter constructor called" << std::endl; 
        }
        Array(unsigned int n)
        {
            _arr = new T[n];
            _arrSize = n;
            std::cout << "unsigned n parameter constructor called" << std::endl;
        }
        ~Array()
        {
            delete [] _arr;
            _arr = NULL;
            std::cout << "Destructor called" << std::endl;
        }
        Array(const Array& copy)
        {
            _arr = new T[_arrSize];
            for (unsigned int i = 0; i < _arrSize; i++)
                _arr[i] = copy._arr[i];
        }
        Array &operator = (const Array& copy)
        {
            if (this == &copy)
                return *this;
            _arrSize = copy._arrSize;
            if (_arr)
                delete [] _arr;
            _arr = new T[_arrSize];
            for (unsigned int i = 0; i < _arrSize; i++)
                _arr[i] = copy._arr[i];
        }
        T &operator [] (unsigned int idx)
        {
            if (idx >= _arrSize || idx < 0)
                throw (OutOfTheLimits());
            return (_arr[idx]);
        }
        unsigned int size()
        {
            return _arrSize;
        }
        class  OutOfTheLimits : public std::exception
		{
			public:
				virtual const char* what(void) const throw()
                {
                    return ("Out of the Limits");
                }
		};

    private:
        T *_arr;
        unsigned int _arrSize;
};

#endif