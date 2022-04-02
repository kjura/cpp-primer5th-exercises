#include <algorithm>
#include <string>
#include <iostream>
#include <vector>
#include <cctype>

// g++ -std=c++20 -pedantic -Wall -Wextra -Werror -Wshadow -Wsign-conversion -g PLACEHOLDER.cpp  -o PLACEHOLDER
// g++ -std=c++20 -pedantic -Wall -Wextra -Wsign-conversion -g PLACEHOLDER.cpp -o PLACEHOLDER
// <br />

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::vector;


int main()
{

    /* This program is not legal. ivec[0] subscripts element that 
    does not exist. Subscripting does not add elements,
    so ivec[0] tries to fetch non-existing element.
    Undefined behaviour 
    vector<int> ivec;
    ivec[0] = 42;
    */

    // correction

    vector<int> ivec;
    ivec.push_back(0);
    ivec[0] = 42;

    cout << ivec[0] << endl;
    
    return 0;
}