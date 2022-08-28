#include <iostream>
#include <vector>
#include <cmath>
 
// g++ -std=c++20 -pedantic -Wall -Wextra -Werror -Wshadow -Wsign-conversion -g sandbox.cpp  -o sandbox
// g++ -std=c++20 -pedantic -Wall -Wextra -Wsign-conversion -g sandbox.cpp -o sandbox
// <br />
using std::cout;
using std::endl;

int main()
{

    const char ca[] = {'h', 'e', 'l', 'l', 'o'}; // NOT NULL TERMINATED!!! Undefined Behaviour 
    const char *cp = ca;

    while (*cp) {
        cout << *cp << endl; // Because there is no null-terminated character in the above array, this is Undefined Behaviour
        ++cp;
    }

    // Probably the program will print every character
    // and then will keep going until it encounters a null character


    return 0;
}
