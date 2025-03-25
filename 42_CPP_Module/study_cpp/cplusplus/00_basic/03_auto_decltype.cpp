#include <iostream>
using namespace std;

int main()
{
    // auto and decltype
    int foo = 3;
    // 'auto' type specifier is a C++11 extension
    // auto bar = foo; // the same as: int bar = foo; 
    decltype(foo) bar; // 변수의 유형을 추론하여 동일한 유형으로 선언한다. the same as: int bar;
    int result;

    // program
    // bar = "abc" // int 형 변수에 string을 할당하려는 에러 발생
    bar = 5;
    result = foo + bar;

    // print out the result
    cout << result;

    // terminate the program
    return (0);
}