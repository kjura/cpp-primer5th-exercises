#include <iostream>

// g++ -std=c++11 -pedantic -Wall -Wextra -Werror -Wshadow -Wsign-conversion -g sandbox.cpp -o sandbox
// g++ -std=c++11 -pedantic -Wall -Wextra -Wsign-conversion -g sandbox.cpp -o sandbox
// Section 2.4, exercise 2.26  <br />


int main() 
{   

    
    const int buf; // ILLEGAL, uninitalized const expression

    int cnt = 0; // LEGAL

    const int sz = cnt; // LEGAl

    ++cnt; ++sz; // ++cnt LEGAL, ++sz ILLEGAL -> modifying a const variable



    return 0;

}