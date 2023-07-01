#include <iostream>
#include <vector>
#include <cmath>
#include <string>

// g++ -std=c++20 -pedantic -Wall -Wextra -Werror -Wshadow -Wsign-conversion -g sandbox.cpp  -o sandbox
// g++ -std=c++20 -pedantic -Wall -Wextra -Wsign-conversion -g sandbox.cpp -o sandbox
// <br />
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{
    bool someValue = true;
    int x = 4;
    int y = 2;

    /*
    If someValue is true then (because conditional operator has higher precendance than comma operator)
    x will be incremented, y is incremented and conditional operator has evaluated itself, what is important
    is that then comma operator kicks in, so y will be pre-decremented and the final outcome will be
    x = 5 and y = 2 (--y will always be executed regardless of the outcome)

    If someValue is false then first --x gives x = 3 and comma operator evalues right-hand expression --y giving
    y = 1
    */

    someValue ? ++x, ++y : --x, --y;

    cout << "x=" << x << " y=" << y << "\n";


    return 0;
}
