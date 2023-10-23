#include <iostream>
#include <vector>
#include <cmath>
#include <string>

// g++ -std=c++20 -pedantic -Wall -Wextra -Werror -Wshadow -Wsign-conversion -g sandbox.cpp  -o sandbox
// g++ -std=c++20 -pedantic -Wall -Wextra -Wsign-conversion -g sandbox.cpp -o sandbox
// <br />
// PLACEHOLDEREXERCISENAME < input.txt > output.txt
// PLACEHOLDEREXERCISENAME ./exercise5 < input.txt >> output.txt
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::cin;

void f(){

    string message = "f() called";
    cout << message << endl;

}

void f(int a){

    string message = "f(int) called";
    cout << message << a << endl;

}

void f(int a, int b){

    string message = "f(int, int) callde";
    cout << message << a << b << endl;

}

void f(double a, double b = 3.14){

    string message = "f(double, double = 3.14) called";
    cout << message << a << b << endl;

}

int main()
{

    f(2.56, 42); // error: call of overloaded ‘f(double, int)’ is ambiguous
    f(42);
    f(42, 0);
    f(2.56, 3.14);


    return 0;
}
