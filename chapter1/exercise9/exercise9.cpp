#include <iostream>


// g++ -std=c++11 -pedantic -Wall -Wextra -Werror -Wshadow -Wsign-conversion -g sandbox.cpp -o sandbox
// Section 1.4.1, exercise 1.9


int main(){

    int starting_number = 50;
    int ending = 100;
    int accumulator = 0;

    while (starting_number <= ending)
    {
        accumulator += starting_number;
        starting_number++;
    }
    

    std::cout << "Summing the numbers from 50 to 100 (50 and 100 are included) gives us " << accumulator << std::endl;
   
    return 0;
}