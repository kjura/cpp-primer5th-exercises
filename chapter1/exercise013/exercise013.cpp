#include <iostream>


// g++ -std=c++11 -pedantic -Wall -Wextra -Werror -Wshadow -Wsign-conversion -g sandbox.cpp -o sandbox
// Section 1.4.2, exercise 1.13



int main(){

    // Rewriting exercise 1.9 from section 1.4.1
    std::cout << "Exercise 1.9 START\n";
    int sum = 0;

    for (int i = 50; i <= 100; i++)
    {
        sum += i;
    }
    std::cout << sum << "\n";
    std::cout << "Exercise 1.9 END\n\n";
    

    // Rewriting exercise 1.10 from section 1.4.1
    std::cout << "Exercise 1.10 START\n";

    for (int i = 10; i >= 0; i--){
        std::cout << i << "\n";
    }

    std::cout << "Exercise 1.10 END\n";

    // Rewriting exercise 1.11 from section 1.4.1
    std::cout << "\n";
    std::cout << "Exercise 1.11 START\n";
    int a = 0;
    int b = 0;
    std::cout << "Please provide two integers, first is the starting point and the second is ending point: ";
    std::cin >> a >> b;

    for(; a <= b; a++){
        std::cout << a << "\n";
    }
    std::cout << "Exercise 1.11 END\n";
    return 0;


}
