#include <iostream>

using namespace std;


// scope 
int foo; // global variable

int some_func()
{
    int bar = 0; // local variable
    return (0);
}

int other_func()
{
    foo = 1; // OK foo is global var
    // bar = 2; // SRY bar is local var
    return (0);
}

int some2_func()
{
    int x;
    x = 0;
    // double x; // wrong: name already used in this scope
    // x = 5.0;
    return (0);
}

int main()
{
    // inner block scope
    int x = 10;
    int y = 20;
    {
        int x;   // ok, inner scope.
        x = 50;  // sets value to inner x
        y = 50;  // sets value to (outer) y
        cout << "inner block:\n";
        cout << "x: " << x << '\n';
        cout << "y: " << y << '\n';
    }
    cout << "outer block:\n";
    cout << "x: " << x << '\n';
    cout << "y: " << y << '\n';
    return (0);
}