#include <iostream>


// g++ -std=c++11 -pedantic -Wall -Wextra -Werror -Wshadow -Wsign-conversion -g sandbox.cpp -o sandbox
// g++ -std=c++11 -pedantic -Wall -Wextra -Wsign-conversion -g sandbox.cpp -o sandbox
// Section 2.3.1, exercise 2.15 <br />



int main() 
{


    int ival = 1.01; // VALID
    int &rval1 = 1.01; // INVALID, initalizer must be an object
    int &rval2 = ival; // VALID
    int &rval3; // INVALID, a reference cannot be uninitalized

    return 0;

}