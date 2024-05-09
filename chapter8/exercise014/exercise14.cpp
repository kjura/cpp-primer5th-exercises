#include <iostream>
#include <vector>
#include <cmath>
#include <string>

// g++ -std=c++20 -pedantic -Wall -Wextra -Werror -Wshadow -Wsign-conversion -g sandbox.cpp  -o sandbox
// g++ -std=c++20 -pedantic -Wall -Wextra -Wsign-conversion -g sandbox.cpp -o sandbox
// <br />
// PLACEHOLDEREXERCISENAME < input.txt > output.txt
// PLACEHOLDEREXERCISENAME ./exercise5 < input.txt >> output.txt
// Redirection in powershell  Get-Content .\input.txt | .\<YOUREXERCISENAME>>.exe
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::cin;

int main()
{

    /* 
    
    Why did we declare entry and nums as const auto &?

    The intention of authors was probably to mark these variables as read-only, they wanted to avoid copying 
    the string (nums) and copying vector of PersonInfo type

    Which is fine if you rember to return values instead of references from format as this have to ouput
    formatted number, if you leave const the compiler will complain about discarded const qualifiers

    A better(?) approach is to leave them as mutable arguments to modify the objects themselves (avoiding copies from returns)
    
     */


    return 0;
}
