#include <iostream>
using namespace std;

int main()
{
    // declaring variables
    int a = 5; 
    int b (3); // 생성자 초기화 (C++ 언어에서 도입) 
    // int c {2}; //  균일 초기화 이는 2011년 C++ 표준 개정으로 도입됨 // clang++ -std=c++11 -stdlib=libc++로 실행 가능함.
    int c;
    int result;

    c = 2;
    
    // process
    a = a + b;
    result = a - c;

    // print out the result
    cout << result;

    // terminate the program
    return (0);
}