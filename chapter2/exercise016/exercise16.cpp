#include <iostream>


// g++ -std=c++11 -pedantic -Wall -Wextra -Werror -Wshadow -Wsign-conversion -g sandbox.cpp -o sandbox
// g++ -std=c++11 -pedantic -Wall -Wextra -Wsign-conversion -g sandbox.cpp -o sandbox
// Section 2.3.1, exercise 2.16 <br />



int main() 
{

    int i = 0, &r1 = i; double d = 0, &r2 = d;

    // All assignments are VALID
    r2 = 3.14159; // r2 is a reference bound to d, d now equals 3.14159
    r2 = r1; // r2 is a reference bound to d, d is now equal i, as r1 is a reference bound to i
    i = r2; // i is now equal to d, as r2 is a reference bound to d
    r1 = d; // i = d as r1 is a reference bound to i

    
    return 0;
}