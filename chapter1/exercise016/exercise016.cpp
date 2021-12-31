#include <iostream>


// g++ -std=c++11 -pedantic -Wall -Wextra -Werror -Wshadow -Wsign-conversion -g sandbox.cpp -o sandbox
// Section 1.4.3, exercise 1.16



int main(){

    
    int number = 0;
    int accumulator = 0;
    std::cout << "Please provide a set of integers ";
    while (std::cin >> number)
    {
        accumulator += number;
        

    }
    
    std::cout << "The sum of a set of numbers is " << accumulator << std:: endl;
    return 0;


}
