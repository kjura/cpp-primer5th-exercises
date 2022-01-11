#include <iostream>


// g++ -std=c++11 -pedantic -Wall -Wextra -Werror -Wshadow -Wsign-conversion -g sandbox.cpp -o sandbox
// g++ -std=c++11 -pedantic -Wall -Wextra -Wsign-conversion -g sandbox.cpp -o sandbox
// Section 2.3.1, exercise 2.17 <br />



int main() 
{

    int i, &ri = i; 
    
    i = 5; ri = 10; 
    
    std::cout << i << " " << ri << std::endl; // i is 10, ri is 10
    
    return 0;
}