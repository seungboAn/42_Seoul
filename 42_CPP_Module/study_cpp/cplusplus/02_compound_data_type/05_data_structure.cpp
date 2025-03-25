#include <iostream>
#include <string>
#include <sstream>

using namespace std;

struct  person_t 
{
    string country;
    int age;
    int height;
}       person_s;


int main()
{
    // Declaring struct
    person_t james;
    string mystr;

    james.country = "Korea";
    james.age = 15;

    // Input and print process
    cout << "Hello James world ! " << endl;
    cout << "Plz type James height: ";
    getline(cin,mystr);
    stringstream(mystr) >> james.height;
    cout << "Yes James height is: " << james.height << endl;
    cout << "See you dudeeee ! " << endl;
}