#include <iostream>


// g++ -std=c++11 -pedantic -Wall -Wextra -Werror -Wshadow -Wsign-conversion -g sandbox.cpp -o sandbox
// Section 1.4.1, exercise 1.10


int main(){

    int number = 10;
    while (number >= 0)
    {
        std::cout << "Printing the numbers from ten down to zero, currently: " << number << "\n";
        number--;
    }
    
    std::cout << std::endl;
    return 0;
}