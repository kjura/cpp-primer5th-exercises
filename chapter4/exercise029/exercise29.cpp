#include <iostream>
#include <vector>
#include <cmath>
#include <string>
// g++ -std=c++20 -pedantic -Wall -Wextra -Werror -Wshadow -Wsign-conversion -g sandbox.cpp  -o sandbox
// g++ -std=c++20 -pedantic -Wall -Wextra -Wsign-conversion -g sandbox.cpp -o sandbox
// <br />
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{
    
    /*
    The exercise does not compile with -Werror -- > 
    error: division ‘sizeof (int*) / sizeof (int)’ does not compute the number of array elements [-Werror=sizeof-pointer-div]
    
    Compiles with g++ -o exercise29 exercise29.cpp --> Bad habit!!!!!! Always sue -Werror!
    */

    int x[10];  // Uninitalized array for 10 elements
    int *p = x; // p points to an int --> p points to a first element in x

    // This machine: a byte consists of 8 bits

    // sizeof(<ARRAY>) == Size of the entire array, DOES NOT convert the array to a pointer
    // sizeof(*<ARRAY>) == Size of the first element (size of its type)

    // sizeof(<POINTER>) == The size needed to hold a pointer
    // sizeof(*<POINTER>) == The size of an object of the type to which the pointer points

    // sizeof(p) = size of a pointer 64 bits = 8 bytes
    // sizeof(*p) = size of the type to which p points == p points to an x[0] which is int == int == 

    cout << sizeof(x) / sizeof(*x) << endl; //  10 * 4 / 4 = 10
    cout << sizeof(p) / sizeof(*p) << endl; // 8 / 4 = 2
    

    return 0;
}
