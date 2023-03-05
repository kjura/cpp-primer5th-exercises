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

    unsigned long ul1 = 3, ul2 = 7;

    auto a = ul1 & ul2; // Output: unsigned long 3
    cout << a << endl;
    auto b = ul1 | ul2; // Output:  usigned long 7
    cout << b << endl;
    auto c = ul1 && ul2; // Output: bool true (prints 1) --> logical AND on two values that are not zero
    cout << c << endl;
    auto d = ul1 || ul2; // Output: bool true (prints 1) --> logical OR on two values that are not zero
    cout << d << endl;


    return 0;
}
