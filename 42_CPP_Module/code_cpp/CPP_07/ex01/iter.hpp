#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void iter(T* arr, unsigned int len, void (*f)(T&)) 
{
  for (unsigned int i = 0; i < len; i++)
    (*f)(arr[i]);
}

template <typename T>
void print_val(T &val) 
{
    std::cout << val << std::endl;
}

#endif