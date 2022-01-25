#include <iostream>

// g++ -std=c++11 -pedantic -Wall -Wextra -Werror -Wshadow -Wsign-conversion -g sandbox.cpp -o sandbox
// g++ -std=c++11 -pedantic -Wall -Wextra -Wsign-conversion -g sandbox.cpp -o sandbox
// <br />


int main() 
{   
    // define a variable named i of  type int, define constant pointer to int named cp
    // ILLEGAL for int *const cp -> Every const object must be initalized
    int i, *const cp; 
    
    // define a pointer p1 that points to int, define a constant pointer to int named p2
    // ILLEGAL for int *const p2 -> Every const object must be initalized
    int *p1, *const p2;

    // define constant int named ic, define and initalize a reference of type const int to ic
    // ILLEGAL -> ic must be initalized
    const int ic, &r = ic;

    // define a constant pointer to const int named p3
    // ILLEGAL -> constant pointer must be initalized
    const int *const p3;

    // define a pointer to const int
    // LEGAL
    const int *p;
    
    return 0;

}