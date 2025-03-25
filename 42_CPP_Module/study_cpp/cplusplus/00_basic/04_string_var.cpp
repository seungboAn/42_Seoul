#include <iostream>
#include <string.h> // 문자열 사용에 필요한 헤더

using namespace std;

int main()
{
    // declaring string variable
    string str = "hello world!";
    string str2 ("this is endl!!!!");
    // string str3 {"this is endl!!!!"};

    // program
    cout << str;
    str = "change variable! and endl";
    cout << str << endl; // endl을 사용해 개행을 실행시킨다.
    cout << str2 << endl;
    // cout << str3 << endl;

    // terminate the program
    return (0);
}

