#include "iter.hpp"

int main( void )
{
    int arr[5] = {5, 4, 3, 2, 1};
    // char arr[5] = {'a', 'b', 'c', 'd', 'e'};
    // double arr[5] = {0.1, 0.2, 0.3, 0.4, 0.5};
    // std::string arr[5] = {"AA", "BB", "CC", "DD", "EE"};

    iter(arr, 5, print_val);
    return 0;
}