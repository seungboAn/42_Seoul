#include <iostream>
using namespace std;

// define (전처리기)
#define PI 3.14159
#define NEWLINE '\n'

int main()
{
    // declaring variables
    double r = 5.0;
    double circle;

    // program with define
    circle = 2 * PI * r;
    cout << circle;
    cout << NEWLINE;

    return (0);
}