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

int main()
{

    // This code gets an input from a user  until its a string and it
    // does not equal to a string held in the variable named sought
    // After cin is invalid or the string is the same as in sought
    // There is an assert macro checking if cin is valid (true)

    // It's not a good use of assert --> we want to check if cin is valid
    // But if we turn off debugging (NDEBUG) then it won't be executed
    // And e.g we can proceed to use invalid cin 


    return 0;
}
