#include <iostream>

using namespace std;

int main()
{
    // initialize array
    // int foo [5]; // 초기화 되지 않은 상태의 배열 생성
    // int foo [5] = { }; // 0으로 초기화된 배열 생성
    // int foo [5] = { 1, 2, 3 }; // 3번째까지 값을 할당하고 나머지는 0으로 초기화된 배열 생성
    int foo [5] = {1, 2, 3, 4}; // 이 경우 컴파일러는 중괄호 사이에 포함된 값의 수와 일치하는 배열의 크기를 자동으로 가정합니다 {}.
    // int foo [] {1, 2, 3, 4}; // 

    // indexing array
    foo[4] = 100;
    // foo[5] = 200; // 범위를 넘어서는 indexing은 불가능하다.

    // Make ndarray
    #define WIDTH 5
    #define HEIGHT 3

    int jimmy [HEIGHT * WIDTH];
    int n,m;

    for (n=0; n<HEIGHT; n++)
        for (m=0; m<WIDTH; m++)
        {
        jimmy[n*WIDTH+m]=(n+1)*(m+1);
        }

    // Print the array
    for (int i = 0; i < 5; i++)
    {
        cout << foo[i] << endl;
    }

    // Print nd array
    for (int j = 0; j < 15; j++)
    {
        cout << jimmy[j] << endl;
    }
}