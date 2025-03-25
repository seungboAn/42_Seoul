#include <iostream>
using namespace std;

// function example
int addition(int a, int b)
{
    int rtn;
    rtn = a + b;
    return (rtn);
}

// void func example
void printmsg()
{
    cout << "i'm void!!!" << endl;
}

// 매개변수가 3개인 함수는 2개로만 호출할 수 있다.
int divide (int a, int b = 2)
{
  int r;

  r = a/b;
  return (r);
}

int main()
{
    int a = 1;
    int b = 2;
    
    // 매개변수로 함수로 호출하면 값의 복사본이 만들어진다.
    // 매개변수가 큰 복잡 유형인 경우 오버헤드가 발생할 수 있음.
    // 매개변수를 참조하여 함수에 사용하면 복사를 피할 수 있다.
    // 참조 매개변수가 있는 함수는 일반적으로 전달된 인수를 수정하는 함수로 사용된다.

    // addition
    int c = addition(a, b);
    cout << "c is: " << c << endl;

    // printf msg
    printmsg();

    // divide
    cout << "(12) Divide: " << divide (20) << '\n';
    cout << "(20, 4) Divide: "<< divide (20, 10) << '\n';
    return (0);

}
