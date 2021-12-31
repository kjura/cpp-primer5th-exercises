#include <iostream>


// g++ -std=c++11 -pedantic -Wall -Wextra -Werror -Wshadow -Wsign-conversion -g sandbox.cpp -o sandbox
// Section 2.1.3, exercise 2.8



int main(){

    std::cout << "\x32\x4d\n";
    
    // Modification of the program

    std::cout << "\x32\t\x4d\n" << std::endl;
    
    return 0;


}
