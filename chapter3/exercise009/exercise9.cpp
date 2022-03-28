#include <algorithm>
#include <string>
#include <iostream>

// g++ -std=c++20 -pedantic -Wall -Wextra -Werror -Wshadow -Wsign-conversion -g PLACEHOLDER.cpp  -o PLACEHOLDER
// g++ -std=c++20 -pedantic -Wall -Wextra -Wsign-conversion -g PLACEHOLDER.cpp -o PLACEHOLDER
// <br />

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
    // DISASTER! UNDEFINED BEHAVIOUR
    // PROGRAM TRIES TO SUBSCRIPT FIRT ELEMENT OF AN EMPTY STRING!
    string s;
    cout << s[0] << endl;   

    return 0;
}