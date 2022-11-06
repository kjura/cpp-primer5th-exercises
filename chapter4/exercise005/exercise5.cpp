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

    auto expr1 = -30 * 3 + 21 / 5; // --> -86

    auto expr2 = -30 + 3 * 21 / 5; // --> -18

    auto expr3 = 30 / 3 * 21 % 5; // --> 0

    auto expr4 = -30 / 3 * 21 % 4; // --> -2

    cout << expr1 << endl;
    cout << expr2 << endl;
    cout << expr3 << endl;
    cout << expr4 << endl;


    return 0;
}
