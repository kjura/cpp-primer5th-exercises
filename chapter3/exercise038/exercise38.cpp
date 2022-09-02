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

    // Why would adding two pointers be meaningless?


    /*

    Subtraction makes sense, we are calculating the distance between the pointers,
    thus we now that by moving one pointer or the other by the result of subtraction,
    we will land in a place in memory that certainly exists and is pointing to something
    (assuming that both pointers are valid)

    Adding two pointers makes no sense, we could end up in an unexpected region in memory
    that does not point to anything, it's a sign of possible disaster, we could try to dereference
    such pointer that is not valid and introduce Undefined behaviour in our program.

    */


    return 0;
}
