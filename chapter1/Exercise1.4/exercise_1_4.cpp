#include <iostream>


// g++ -std=c++11 -pedantic -Wall -Wextra -Werror -Wshadow -Wsign-conversion -g exercise_1_4.cpp -o exercise_1_4


int main(){


    std::cout << "Enter two numbers:" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "The product of " << v1 << " and " << v2
              << " is " << v1 * v2 << std::endl;

    return 0;
}