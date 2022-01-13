#include <iostream>

// g++ -std=c++11 -pedantic -Wall -Wextra -Werror -Wshadow -Wsign-conversion -g sandbox.cpp -o sandbox
// g++ -std=c++11 -pedantic -Wall -Wextra -Wsign-conversion -g sandbox.cpp -o sandbox
// Section 2.3.2, exercise 2.20 <br />



int main() 
{
    
  
    int i = 42;
    int *p1 = &i;
    // Dereference pointer p1 -> Change value of i, dereference two times the older value of p1
    // Then multiply 42 by 42 and get 1764
    *p1 = *p1 * *p1; 

    std::cout << *p1 << "\n"; // Prints 1764

    return 0;

}