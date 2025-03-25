#include <iostream>

using namespace std;

int main()
{
    int * foo;
    
    // Allocating memory
    foo = new (nothrow) int [5];

    // error assigning memory. Take measures.
    if (foo == nullptr)
        return (0);

    // Free memory
    // 첫 번째 명령문은 를 사용하여 할당된 단일 요소의 메모리를 해제하고 
    // 두 번째 명령문 new은 대괄호( []) 안의 new 및 크기를 사용하여 요소 배열에 할당된 메모리를 해제합니다 .
    delete foo;
    delete[] foo;
}