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


// about inlines see also: https://www.learncpp.com/cpp-tutorial/inline-functions/

int main()
{


    // This eq definition should go to the  header, it is marked as inline
    // This is because all of the definitions for inline must match exactly and inline and constexpr functions
    // can be defined multiple times in the program

    // inline bool eq(const BigInt&, const BigInt&) {...}



    // This should go to a header, this is a regular void function (can also go to the source file)
    // void putValues(int *arr, int size);


    return 0;
}
