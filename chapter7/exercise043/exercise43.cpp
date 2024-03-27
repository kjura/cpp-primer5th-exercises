#include <iostream>
#include <vector>
#include <cmath>
#include <string>

// g++ -std=c++20 -pedantic -Wall -Wextra -Werror -Wshadow -Wsign-conversion -g sandbox.cpp  -o sandbox
// g++ -std=c++20 -pedantic -Wall -Wextra -Wsign-conversion -g sandbox.cpp -o sandbox
// <br />
// PLACEHOLDEREXERCISENAME < input.txt > output.txt
// PLACEHOLDEREXERCISENAME ./exercise5 < input.txt >> output.txt
// Redirection in powershell  Get-Content .\input.txt | .\<YOUREXERCISENAME>>.exe
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::cin;

class NoDefault{

    int something {};

    public:
        NoDefault(int arg) : something(arg) {cout << "NoDefault constructor with int called" << "\n";};

};


class C{

    NoDefault c_no_def;
    public:

        C() : c_no_def(42) {cout << "C constructor called" << "\n";};

};

int main()
{

    NoDefault hello(42);
    C hello_C;


    return 0;
}
