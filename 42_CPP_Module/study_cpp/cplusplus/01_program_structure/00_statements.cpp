#include <iostream>
#include <string.h>

using namespace std;

int main(void)
{
    int x = 100;

    // if
    if (x == 100) { cout << "x is: " << x << endl; }
    
    // if else if else
    x = 50;
    if (x == 50)
    {
        cout << "changed x is: " << x << endl;
    }
    else if (x < 0)
    {
        cout << "x is negative" << endl;
    }
    else
    {
        cout << "failed change " << endl;
    }

    // while
    int y = 1;
    while (y < 10)
    {
        cout << "y is: " << y << endl;
        y++;
    }
    
    // do while
    // statement끝을 확인하는 조건이 루프 문 자체 내에서 결정되는 경우와 같이 한 번 이상 실행해야 할 때 유용함
    string str;
    
    do
    {
        cout << "Enter text: ";
        getline(cin, str);
        cout << "you entered: " << str << endl;
    } while (str != "eof");

    // for
    for (int z = 10; z > 0; z--)
    {
        cout << "z is: " << z << endl;
    }
    
    // for third field
    int foo, bar;
    for (foo = 0, bar = 100; foo != bar; foo++, bar--)
    {
        cout << "foo: " << foo << endl;
    }

    // for (declaration : range)
    // c++11에서 사용 가능 lang++ -std=c++11 -stdlib=libc++
    string str2 = "Hello for loop!"; 
    for (auto c : str2)
    {
        cout << "c is: " << c << endl;
    }
}