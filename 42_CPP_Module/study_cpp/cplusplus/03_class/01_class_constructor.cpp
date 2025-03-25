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
        rectangle (int, int);
        int area()
        {
            return (width * height);
        }
};

rectangle::rectangle(int x, int y) {
  width = x;
  height = y;
}

int main()
{
    rectangle rect(3, 4);
    cout << "rect.area: " << rect.area() << endl;
    return (0);
}