#include <iostream>

// g++ -std=c++11 -pedantic -Wall -Wextra -Werror -Wshadow -Wsign-conversion -g sandbox.cpp -o sandbox
// g++ -std=c++11 -pedantic -Wall -Wextra -Wsign-conversion -g sandbox.cpp -o sandbox
// Section 2.3.2, exercise 2.20 <br />



int main() 
{   
    int i = 0;

    // ILLEGAL, initalizing a pointer dp with the address of i where i is int but pointer has type double
    double* dp = &i;

    // ILLEGAL, initalizing a pointer with the value of 0, pointers are variables that hold address
    int *ip = i;

    // LEGAL, initalizing int pointer to int i variable
    int *p = &i;
    
    return 0;

}