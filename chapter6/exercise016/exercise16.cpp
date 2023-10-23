#include <iostream>
#include <vector>
#include <cmath>
#include <string>

// g++ -std=c++20 -pedantic -Wall -Wextra -Werror -Wshadow -Wsign-conversion -g sandbox.cpp  -o sandbox
// g++ -std=c++20 -pedantic -Wall -Wextra -Wsign-conversion -g sandbox.cpp -o sandbox
// <br />
// PLACEHOLDEREXERCISENAME < input.txt > output.txt
// PLACEHOLDEREXERCISENAME ./exercise5 < input.txt >> output.txt
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::cin;


// 1. Change it to const ref, nothing is changed, it's read-only, so we should indicate it this way
// 2. We can pass a string literal this way
bool is_empty(const string& s) { 
    return s.empty(); 
    }

int main()
{

    cout << is_empty("") << endl;


    return 0;
}
