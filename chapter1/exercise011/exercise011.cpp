#include <iostream>


// g++ -std=c++11 -pedantic -Wall -Wextra -Werror -Wshadow -Wsign-conversion -g sandbox.cpp -o sandbox
// Section 1.4.1, exercise 1.11


int main(){

    int a = 0;
    int b = 0;

    std::cout << "Please provide two integers, first is the starting point and the second is ending point: ";
    std::cin >> a >> b;
    //std::cout << "\n";
    while (a <= b)
    {
        std::cout << a << "\n";
        a++;
    }
    
    


    return 0;
}