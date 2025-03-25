#include <iostream>
using namespace std;

int main()
{
    // 1. 조건부 삼항 연산자( ? )
    int a, b, c;

    a = 2;
    b = 7;
    c = (a > b) ? 5 : 2;
    cout << "c: ";
    cout << c << endl;

    // 2. 쉼표 연산자 ( , )
    int foo, bar;

    foo = (b=5, b+5);
    cout << "foo: ";
    cout << foo << endl;
    cout << "bar: ";
    cout << bar << endl;

    // 3. 명시적 유형 캐스팅 연산자 
    int i;
    float f = 3.14;

    // casting 2가지 방법
    i = (int) f;
    i = int (f);
    cout << "i: ";
    cout << i << endl;
}