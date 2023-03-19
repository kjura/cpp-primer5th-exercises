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

    int sum = 0, val = 1;

    // while (val <= 10) {
    //     sum += val;
    //     ++val;
    // }
    while (val <= 10) sum += val, ++val;
    std::cout << "sum of 1 to 10 inclusive is " << sum << std::endl;

    return 0;

}
