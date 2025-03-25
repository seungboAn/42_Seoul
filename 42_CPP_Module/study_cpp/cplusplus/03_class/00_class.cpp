#include <iostream>

using namespace std;

/*
    class는 data structure의 확장된 개념이며, 함수를 멤버로 포함할 수 있다.
    또한, access specifier라는 새로운 항목을 지정할 수 있으며, private, public, protected로 구성된다.
*/

class rectangle
{
    int width, height;
    public:
        void set_values (int, int);
        int area()
        {
            return (width * height);
        }
};

void rectangle::set_values (int x, int y) {
  width = x;
  height = y;
}

int main()
{
    // example class
    rectangle rect;

    rect.set_values(3, 4);
    cout << "rect.area: " << rect.area() << endl;
    return (0);
}