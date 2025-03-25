#include <iostream>

using namespace std;

int main()
{
    // break
    for (int i = 10; i > 0; i--)
    {
        cout << "i is: " << i << endl;
        if (i == 3)
        {
            cout << "i is three! break here" << endl;
            break;
        }
    }

    // continue
    // j == 5 인 경우 해당 코드 아래로 실행되지 않고 다음으로 건너 뛴다.
    for (int j = 10; j > 0; j--)
    {
        if (j == 5) continue;
        cout << "j is: " << j << endl;
    }

    // goto
    // z가 if 조건에 들어가는 경우 mylabel 실행
    int z = 10;
    mylabel:
    cout << z << ", ";
    z--;
    if (z > 5) goto mylabel;
    cout << "finished!\n";

    // switch
    // 조건이 상수 표현식에 도달하면 실행된다. break가 없다면 default까지 실행됨.
    int x = 1;
    switch (x) 
    {
    case 1:
        cout << "x is 1";
        break;
    case 2:
    case 3:
        cout << "x 2 or 3";
        break;
    default:
        cout << "x is not 1, 2 nor 3";
    }
}