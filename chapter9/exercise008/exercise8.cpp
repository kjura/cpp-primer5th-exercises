#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <list>

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
    
    What type should be used to read elements in a `list` of
    `strings`? To write them?
    
    std::list<std::string>::const_reference and not std::list<std::string>::reference
    WHY? Because list does not support fast random access

    To read: std::list<std::string>::const_iterator

    To write: std::list<std::string>::iterator


    */

    return 0;
}
