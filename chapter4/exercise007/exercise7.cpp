#include <iostream>
#include <vector>
#include <cmath>
#include <limits>
 
// g++ -std=c++20 -pedantic -Wall -Wextra -Werror -Wshadow -Wsign-conversion -g sandbox.cpp  -o sandbox
// g++ -std=c++20 -pedantic -Wall -Wextra -Wsign-conversion -g sandbox.cpp -o sandbox
// <br />
using std::cout;
using std::endl;

int main()
{

    /*
    Overflow --> (from Lippman et. al) Overflow happens when a value is computed that is outside the range of values
    that the type can represent
    */

    // overflow after -32768
    // overflow after 32767

    short ub1 = 32767;
    ub1 += 1; // UB

    short ub2 = 32767;
    ub2 += 2; // UB

    short ub3 = 32767;
    ub3 += 3; // UB

    cout << ub1 << "\n";
    cout << ub2 << "\n";
    cout << ub3 << "\n";

    return 0;
}
