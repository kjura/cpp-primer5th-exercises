#include <iostream>

// g++ -std=c++11 -pedantic -Wall -Wextra -Werror -Wshadow -Wsign-conversion -g sandbox.cpp -o sandbox
// g++ -std=c++11 -pedantic -Wall -Wextra -Wsign-conversion -g sandbox.cpp -o sandbox
// <br />


int main() 
{   
    
    
    
    const int v2 = 0; int v1 = v2; 

    int *p1 = &v1, &r1 = v1; 

    const int *p2 = &v2, *const p3 = &i, &r2 = v2; 

    r1 = v2; // LEGAL -> Ok, top-level const in v2 is ignored
    p1 = p2; // ILLEGAL -> both objects must have the same low-level const qualification, cannot convert const int to int
    p2 = p1; // LEGAL -> Ok, p1 is converted to const int
    p1 = p3; // ILLEGAL -> both objects must have the same low-level const qualification
    p2 = p3; // LEGAL -> OK, top-level const in p3 is ignored, low-level consts match
    
    return 0;

}
