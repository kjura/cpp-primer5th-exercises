#include <iostream>
#include <vector>
#include <cmath>
#include <string>

// g++ -std=c++20 -pedantic -Wall -Wextra -Werror -Wshadow -Wsign-conversion -g sandbox.cpp  -o sandbox
// g++ -std=c++20 -pedantic -Wall -Wextra -Wsign-conversion -g sandbox.cpp -o sandbox
// <br />
// PLACEHOLDEREXERCISENAME < input.txt > output.txt
// PLACEHOLDEREXERCISENAME ./exercise5 < input.txt >> output.txt
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::cin;

int factorial (int val){
    if (val > 1){
        return factorial(val--) * val; // Confirmed UB

        // The order of evaluation is arbitrary (UB)
        // In arithmetic expressions see: https://en.cppreference.com/w/cpp/language/eval_order
    }
    return 1;
}

int main()
{

    /*

    The program is corrupted since the very start, this is Undefined Behaviour (order of evaluation for multiplication "*" and "--)

    */

    factorial(6);


    return 0;
}
