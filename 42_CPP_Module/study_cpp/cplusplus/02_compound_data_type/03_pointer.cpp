#include <iostream>

using namespace std;

int main()
{
    // initialize var
    int myvar = 25;
    int *foo = &myvar;
    int *bar = foo;   // baz equal to foo (1776)
    int ast = *foo;

    // Print the vars
    *foo = 500;
    cout << "myvar: " << myvar << endl;
    cout << "foo: " << foo << endl;
    cout << "bar: " << bar << endl;
    cout << "ast: " << ast << endl;
}