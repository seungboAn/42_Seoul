#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    // endl은 문자열 \n으로 표현 가능하다. cout << "hi" << endl; == cout << "hi\n";

    // // 1. I/O example
    // cout << "1. I/O example\n";
    // int i;

    // // cin: 표준 입력, cout: 표준 출력
    // cout << "Type your age :)" << endl;
    // cout << "Input: ";
    // cin >> i;
    // cout << "your age: " << i << endl; 
    // return (0);

    // // 2. string I/O
    // cout << "2. string I/O example\n";
    // string str;

    // cout << "what's your name: ";
    // getline (cin, str);
    // cout << "hello " << str << ".\n";
    // cout << "what's your hobby: ";
    // getline (cin, str);
    // cout << "wow " << str << " is very good :)\n";
    // return (0);

    // 3. string stream 
    // string으로 받는 문자열을 해당 변수 유형으로 변환 시킨다.
    string str;
    float price = 0;
    int quantity = 0;

    cout << "Enter price: ";
    getline (cin,str);
    stringstream(str) >> price;
    cout << "Enter quantity: ";
    getline (cin,str);
    stringstream(str) >> quantity;
    cout << "Total price: " << price * quantity << endl;
    return 0;
}