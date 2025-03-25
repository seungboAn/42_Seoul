#include <iostream>

using namespace std;

/*
    class constuctor 
    이 함수는 일반 멤버 함수처럼 선언되지만 클래스 이름과 일치하는 이름으로 반환 유형이 없습니다.
*/


class rectangle
{
    int width, height;
    public:
        rectangle ();
        rectangle (int, int);
        int area()
        {
            return (width * height);
        }
};

rectangle::rectangle() {
  width = 7;
  height = 7;
}

rectangle::rectangle(int x, int y) {
  width = x;
  height = y;
}

int main()
{
    rectangle rect(3, 4);

    // Rectangle rectb;   // ok, default constructor called
    // Rectangle rectc(); // oops, default constructor NOT called 
    rectangle rectb;
    cout << "rect.area: " << rect.area() << endl;
    cout << "rectb.area: " << rectb.area() << endl;
    return (0);
}