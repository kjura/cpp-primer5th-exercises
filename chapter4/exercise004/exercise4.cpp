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

    // 12 / 3 * 4 + 5 * 15 + 24 % 4 / 2

    // Parents ->      ( ( ( (12 / 3) * 4)  + (5 * 15) )  + ( (24 % 4) / 2) ) = 91


    auto myExpr = 12 / 3 * 4 + 5 * 15 + 24 % 4 / 2;

    cout << myExpr << endl; // will print 91


    return 0;
}
