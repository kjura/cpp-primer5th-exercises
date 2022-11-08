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

    const char *cp = "Hello World"; // Pointer to the first element of an array, it points to the address of H

     if (cp && *cp){
        cout << "True" << endl;
    }
    else{
        cout << "false" << endl;
    }
    

    // True if cp is not a null pointer and if the character that cp points to is not zero
    // cp is not a null pointer and it points to letter H, it gets promoted to int (ASCII 72 on my machine)
    // it is not zero, both conditions are true

    // int my = int('H'); --> ASCII 072

    return 0;
}
