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

char *init(int ht, int wd = 80, char bckgrnd = ' ');


int main()
{

    // init(); --> Illegal, ht must be initalized when calling init()

    // init(24,10); --> Legal, concious decision to omit third param (no background change)

    // init(14, '*'); --> Legal, unlikely to match programmer's intent (conversion of char "*" to int)


    return 0;
}
