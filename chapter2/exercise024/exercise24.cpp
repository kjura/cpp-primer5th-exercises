#include <iostream>

// g++ -std=c++11 -pedantic -Wall -Wextra -Werror -Wshadow -Wsign-conversion -g sandbox.cpp -o sandbox
// g++ -std=c++11 -pedantic -Wall -Wextra -Wsign-conversion -g sandbox.cpp -o sandbox
// Section 2.3.2, exercise 2.24 <br />



int main() 
{   

    int i = 42;
    void *p = &i; // OK, initalize a void pointer, it can point to any object regardless of type
    long *lp = &i; // ERROR, cannot create a pointer of type long pointing to int

    return 0;

}
