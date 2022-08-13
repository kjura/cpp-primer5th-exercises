#include <algorithm>
#include <string>
#include <iostream>
#include <vector>
#include <cctype>
#include <limits>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::vector;

// g++ -std=c++20 -pedantic -Wall -Wextra -Werror -Wshadow -Wsign-conversion -g PLACEHOLDER.cpp  -o PLACEHOLDER
// g++ -std=c++20 -pedantic -Wall -Wextra -Wsign-conversion -g PLACEHOLDER.cpp -o PLACEHOLDER
// <br />


int main() { 


    constexpr size_t array_size = 10;
    int ia[array_size]; // --> Array of ten ints

    /* --> Error, stars going through  ia[] from index 1 and attempts to 
    assign ia[10] = 10, but array_size has indices from 0 to 9 */
    for (size_t ix = 1; ix <= array_size; ++ix){ 
        ia[ix] = ix; // UB when ia[10] = 10
    }
    

    return 0;


}

