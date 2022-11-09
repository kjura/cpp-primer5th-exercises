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

    // if (p = getPtr() != 0)
    // probably checking if p is not a null pointer with getPtr() function call
    // can be written as -->  if ( (p = getPtr()) != 0), the we are checking for the result of the assingment to p
    // because != has precedence over =

    // if (i = 1024) --> Probably a typo, was supposed to compare if i is an int with a value 1024
    // Better to write it like this: if (i == 1024) --> use equality operator


    return 0;
}
