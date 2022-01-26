#include <iostream>

// g++ -std=c++11 -pedantic -Wall -Wextra -Werror -Wshadow -Wsign-conversion -g sandbox.cpp -o sandbox
// g++ -std=c++11 -pedantic -Wall -Wextra -Wsign-conversion -g sandbox.cpp -o sandbox
// <br />


int main() 
{   
    
    
    
    const int v2 = 0; int v1 = v2; // v2 is top-level const, v1 is nonconst integer

    int *p1 = &v1, &r1 = v1; // p1 is a pointer to int, r1 is a reference bound to v1


    // const int  *p2 = &v2 --> p2 is low-level const
    // const int *const p3 = &i --> rightmost const is top-level, leftmost is low-level
    // const int &r2 = v2 --> r2 is low-level const
    // NOTE: i has to be defined beforehand
    const int *p2 = &v2, *const p3 = &i, &r2 = v2; 

    
    return 0;

}