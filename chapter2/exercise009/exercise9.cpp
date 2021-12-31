#include <iostream>


// g++ -std=c++11 -pedantic -Wall -Wextra -Werror -Wshadow -Wsign-conversion -g sandbox.cpp -o sandbox
// Section 2.2.1, exercise 2.9



int main(){

    // std::cin >> int input_value; ERROR: using declaration type in an expression cin
    
    /*int input_value = 0;
    std::cin >> input_value; */

    // int i = { 3.14 }; loss of information from narrowing conversion from double to int
    //double i1 = {3.0};
    //double i2 = {3};

    // double salary = wage = 9999.99; there needs to be wage declaration before
    //double wage;
    //double salary = wage = 9999.99;
    //std::cout << "Wage is " << wage << " and salary is " << salary << std::endl;
    
    // i has type int, but it contains floating-point type, it will get truncated to 3
    //int i = 3.14;


    return 0;


}
