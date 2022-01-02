#include <iostream>


// g++ -std=c++11 -pedantic -Wall -Wextra -Werror -Wshadow -Wsign-conversion -g sandbox.cpp -o sandbox
// g++ -std=c++11 -pedantic -Wall -Wextra -Wsign-conversion -g sandbox.cpp -o sandbox
// Section 2.2.3, exercise 2.12


int i = 42;
int main() 
{

    

    int i = 100;
    int j = i; // Value of j is 100, it takes the value from local variable i, NOT global variable defined before main()
    //if we want to use global i, we can use :: (scope operator)
    //std::cout << ::i + i << std::endl;
    
    return 0;
}