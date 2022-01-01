#include <iostream>


// g++ -std=c++11 -pedantic -Wall -Wextra -Werror -Wshadow -Wsign-conversion -g sandbox.cpp -o sandbox
// Section 2.2.3, exercise 2.12



int main() 
{

    int double = 3.14; // using keyword double as a name, ERROR
    int _; // CORRECT
    int catch-22; // "-" sign and catch keyword, ERROR
    int 1_or_2 = 1; // ERROR, indetifier cannot begin with a number
    double Double = 3.14; // CORRECT


    return 0;
}