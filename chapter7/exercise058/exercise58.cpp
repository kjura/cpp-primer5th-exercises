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

// example.h
/* 
class Example {
    public:
        static double rate = 6.5; ------> ILLEGAL, must be const integral type
        static const int vecSize = 20; ----> OK
        static vector<double> vec(vecSize); 
        ------> ILLEGAL, cannot use parents as in-class initalizer
        ------> ILLEGAL, static members should be init outside of a class
}; 

*/

// example.C

/* 
#include "example.h"
// These should be initalized before, they should be defined here
double Example::rate; 
vector<double> Example::vec; 

*/

int main()
{




    return 0;
}
