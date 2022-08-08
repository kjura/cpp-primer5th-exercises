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

string sa[10]; // Default initalization --> empty string 
int ia[10]; // Default initalization --> 10 zeroes

int main() { 

    //string sa2[10]; // Undefined value, defined inside a function

    //int ia2[10]; // Undefined value, defined inside a function


    for (auto e : sa){ // Empty string
        cout << e << " ";
    }
    cout << "\n";


    for (auto e : ia){ // Zero
        cout << e << " ";
    }
    cout << "\n";

    /*for (auto e : sa2){ // UB fun :)))
        cout << e << " ";
    }
    cout << "\n";

    for (auto e : ia2){ // UB fun :)))
        cout << e << " ";
    }
    cout << "\n"; */

    return 0;

    }