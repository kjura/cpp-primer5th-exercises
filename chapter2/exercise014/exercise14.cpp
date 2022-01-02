#include <iostream>


// g++ -std=c++11 -pedantic -Wall -Wextra -Werror -Wshadow -Wsign-conversion -g sandbox.cpp -o sandbox
// g++ -std=c++11 -pedantic -Wall -Wextra -Wsign-conversion -g sandbox.cpp -o sandbox
// Section 2.2.3, exercise 2.12



int main() 
{

   
    int i = 100, sum = 0;
    for (int i = 0; i != 10; ++i){
        sum += i;
    }
    
    
    std::cout << i << " " << sum << std::endl; // i is 100 and sum is 45
    
    return 0;
}