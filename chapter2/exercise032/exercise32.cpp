#include <iostream>

// g++ -std=c++11 -pedantic -Wall -Wextra -Werror -Wshadow -Wsign-conversion -g sandbox.cpp -o sandbox
// g++ -std=c++11 -pedantic -Wall -Wextra -Wsign-conversion -g sandbox.cpp -o sandbox
// <br />


int main() 
{   
    
    //int null = 0, *p = null;

    // TODO: analyse this exercise further
    // My opinion: To make it legal just add & (address of) operator so the constant pointer to int holds address
    // Pointers are variables that are supposed to hold address of some variable, right?

    //int null = 0, *p = &null;
    int null = 0;
    int *p = &null;

    std::cout << p << "\n";


    return 0;

}
