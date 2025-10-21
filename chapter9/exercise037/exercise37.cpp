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

    // List: As long as you don't erase the corresponding element
    // objects will stay at the same memory location, so no reallocation is needed
    // Elements are notcontiguous

    // Array: The size of an array is fixed, if you want to add more elements, you need to create a new array and allocate space,
    // we know exactly how much space we want to allocate when we define an array (because its size is fixed) so
    // no need for pre-allocation strategies (hence capacity)


    return 0;
}
