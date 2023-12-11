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

void manip(int, int);
double dobj;

int main()
{

// (a)
    manip('a', 'z'); // Rank=3 Match through a promotion of char to int 

// (b)

    manip(55.4, dobj); // Rank=4 (NOT 3) Match through an arithmetic conversion 


    return 0;
}
