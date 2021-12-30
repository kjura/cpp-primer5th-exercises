#include <iostream>


// g++ -std=c++11 -pedantic -Wall -Wextra -Werror -Wshadow -Wsign-conversion -g sandbox.cpp -o sandbox
// Section 1.4.2, exercise 1.12



int main(){

    int sum = 0; 
    for (int i = -100; i <= 100; ++i){
    sum += i;
    }
    
    // Output should be 0
    std::cout << sum << std::endl;

    return 0;
}
