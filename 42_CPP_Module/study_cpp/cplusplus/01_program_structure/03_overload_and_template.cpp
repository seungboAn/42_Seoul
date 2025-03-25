#include <iostream>

using namespace std;

int operate(int a, int b)
{
    return (a * b);
}

double operate(double a, double b)
{
    return (a / b);
}

// template
template <class T>
T sum (T a, T b)
{
    T result;
    result = a + b;
    return (result);
}

template <class T, class U>
bool are_equal (T a, U b)
{
  return (a == b);
}

template <class T, int N>
T fixed_multiply (T val)
{
  return val * N;
}

int main()
{
    // overload
    cout << "int oper result: " << operate(10, 5) << endl;
    cout << "doubler oper result: " << operate(10.0 , 5.0) << endl;

    // template 연산
    // sum에서 반환되는 값의 유형을 정할 수 있다.
    // 변수의 유형에 따라 형변환이 한 번 더 이루어질 수 있다.
    double z = sum<double>(5.5, 5);
    cout << "template result: " << z << endl;

    // template bool
    if (are_equal(10,15.0))
        cout << "x and y are equal\n";
    else
        cout << "x and y are not equal\n";

    // template multiply
    cout << "mutiply: " << fixed_multiply<int,2>(10) << '\n';
    cout << "mutiply: " << fixed_multiply<int,5>(10) << '\n';
    return (0);
}