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

    // With parentheses ==> (5 + ((10 * 20) / 2)) = 105

    cout << 5 + 10 * 20 / 2 << "\n"; // prints 105


    return 0;
}
