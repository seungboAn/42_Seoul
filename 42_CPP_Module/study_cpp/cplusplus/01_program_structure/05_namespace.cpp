#include <iostream>

// standard namespace
// 표준 C++ 라이브러리의 모든 엔터티(변수, 유형, 상수 및 함수)는 std네임스페이스 내에서 선언됩니다.
// 실제로 이 자습서의 대부분의 예에는 다음 줄이 포함되어 있습니다.
using namespace std;

// Using namespace
namespace first
{
    int x = 5;
}

namespace second
{
    double x = 3.1416;
}

// namespace aliasing
namespace first_alias = first;


int main()
{
    // code block 안에서 사용되면 중복 문제가 없음.
    {
        using namespace first;
        cout << x << endl;
    }
    {
        using namespace second;
        cout << x << endl;
    }
    {
        using namespace first_alias;
        cout << x << endl;
    }
    return (0);
}