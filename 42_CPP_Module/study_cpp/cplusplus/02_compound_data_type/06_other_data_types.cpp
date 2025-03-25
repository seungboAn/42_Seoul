#include <iostream>

using namespace std;

int main()
{
    // 1. typedef
    typedef char C;
    typedef unsigned int WORD;
    typedef char * pChar;
    typedef char field [50]; 

    // After typedef, Using name
    C mychar, anotherchar, *ptc1;
    WORD myword;
    pChar ptc2;
    field name; 

    // Using is same typedef But c++11 extension
    // using C = char;
    // using WORD = unsigned int;
    // using pChar = char *;
    // using field = char [50];

    // 2. union
    union mytypes_t 
    {
        char c;
        int i;
        float f;
    } mytypes;

    /*
    이러한 각 멤버는 서로 다른 데이터 유형입니다. 
    그러나 그들 모두는 메모리의 같은 위치를 참조하고 있기 때문에 
    멤버 중 하나를 수정하면 모든 멤버의 값에 영향을 미칩니다.
    */

   // enum 열거형
   enum colors_t {black, blue, green, cyan, red, purple, yellow, white};

    colors_t mycolor;
 
    mycolor = blue;
    cout << "Before mycolor: " << mycolor << endl;
    if (mycolor == blue)
        mycolor = red;
    cout << "After mycolor: " << mycolor << endl;
}