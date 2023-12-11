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
    
    read defines its Sales_data parameter as a plain reference because it reads an input passed
    to this parameter, it cannot be a reference to const because it must be mutable, we want to
    store information in item passed in cin

    print defines its paramter as a reference to const because it doesn't need to be modifiable,
    print only outputs information on a screen, there is no need to store data inside item
    
    
     */


    return 0;
}
