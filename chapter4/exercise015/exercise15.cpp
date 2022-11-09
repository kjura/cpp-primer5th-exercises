#include <iostream>
#include <vector>
#include <cmath>
 
// g++ -std=c++20 -pedantic -Wall -Wextra -Werror -Wshadow -Wsign-conversion -g sandbox.cpp  -o sandbox
// g++ -std=c++20 -pedantic -Wall -Wextra -Wsign-conversion -g sandbox.cpp -o sandbox
// <br />
using std::cout;
using std::endl;

int main()
{


    double dval; int ival; int *pi;
    
    // dval = ival = pi = 0; --> ERROR: you cannot assign (pointer to int) to int
    // ival would get address of pi, this operation is not legal

    // instead, move assingment to pi to a new line, assign it a zero value (null-pointer)
    dval = ival = 0;
    pi = 0;
    
    cout << dval << " " << ival << " " << pi << "\n"; // prints 0 0 0

    return 0;
}
