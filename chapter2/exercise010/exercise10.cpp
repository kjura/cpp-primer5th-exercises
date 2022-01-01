#include <iostream>


// g++ -std=c++11 -pedantic -Wall -Wextra -Werror -Wshadow -Wsign-conversion -g sandbox.cpp -o sandbox
// Section 2.2.1, exercise 2.10



std::string global_str; // Defaults to empty string
int global_int; // defaults to zero
int main() 
{
    //int local_int; // Undefined behaviour
    std::string local_str; // Defaults to empty string


    std::cout << "Global str is " << global_str << "\n";
    std::cout << "Global_int is " << global_int << "\n";
    std::cout << "local_str is " << local_str << "\n";

    return 0;
}