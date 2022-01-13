#include <iostream>


// g++ -std=c++11 -pedantic -Wall -Wextra -Werror -Wshadow -Wsign-conversion -g sandbox.cpp -o sandbox
// g++ -std=c++11 -pedantic -Wall -Wextra -Wsign-conversion -g sandbox.cpp -o sandbox
// Section 2.3.2, exercise 2.18 <br />


int main() 
{
    
    int init_val = 44;
    int *ptr_init_val = &init_val;
    
    // Change the value of the pointer

    *ptr_init_val = 50;
    std::cout << *ptr_init_val << " " << init_val << "\n";
    
    // Change the value to which the pointer points

    init_val = 123;
    std::cout << init_val << " " << *ptr_init_val << "\n";


    return 0;

}