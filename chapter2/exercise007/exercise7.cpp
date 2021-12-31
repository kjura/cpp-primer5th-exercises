#include <iostream>


// g++ -std=c++11 -pedantic -Wall -Wextra -Werror -Wshadow -Wsign-conversion -g sandbox.cpp -o sandbox
// Section 2.1.3, exercise 2.7



int main(){

    
    std::cout << "Who goes with F\145rgus?\012"; // Who goes with Fergus \n , String with generalized escape sequences
    std::cout << 3.14e1L << "\n"; // 3.14 * (10^1) Long double
    //std::cout << 1024f << "\n"; // Compiler raises an error for that, shouldn't it be written as 1024.0f? (notice zero). float
    std::cout << 3.14L << "\n"; // 3.14 Long double
    
    return 0;


}
