#include "Array.hpp"

int main(void)
{
    std::cout << " [ TEST int n parameter ] " << std::endl;
    Array<int> intArr(5);
    for (unsigned int i = 0; i < intArr.size(); i++)
    {
        intArr[i] = i;
        std::cout << "intArr[" << i << "]: " << intArr[i] << std::endl;
    }
    std::cout << std::endl;
    try
    {
        std::cout << " [ TEST Out of Limits ] " << std::endl;
        intArr[4] = 10;
        std::cout << "intArr[4]: " << intArr[4] << std::endl;
        intArr[5] = 5;
        std::cout << "intArr[5]: " << intArr[5] << std::endl;
    }
    catch(const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
    std::cout << " [ TEST char n parameter ] " << std::endl;
    Array<char> charArr(5);
    for (unsigned int i = 0; i < charArr.size(); i++)
    {
        charArr[i] = static_cast<char>(i + 65);
        std::cout << "charArr[" << i << "]: " << charArr[i] << std::endl;
    }
    try
    {
        std::cout << " [ TEST Out of Limits ] " << std::endl;
        charArr[4] = 75;
        std::cout << "charArr[4]: " << charArr[4] << std::endl;
        charArr[5] = 76;
        std::cout << "charArr[5]: " << charArr[5] << std::endl;
    }
    catch(const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    system("leaks a.out");
    return 0;
}
