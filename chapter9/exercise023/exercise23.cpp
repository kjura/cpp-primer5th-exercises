#include <iostream>
#include <vector>
#include <cmath>
#include <string>

// g++ -std=c++20 -pedantic -Wall -Wextra -Werror -Wshadow -Wsign-conversion -g sandbox.cpp  -o sandbox
// g++ -std=c++20 -pedantic -Wall -Wextra -Wsign-conversion -g sandbox.cpp -o sandbox
// <br />
// PLACEHOLDEREXERCISENAME < input.txt > output.txt
// PLACEHOLDEREXERCISENAME ./exercise5 < input.txt >> output.txt
// Redirection in powershell  Get-Content .\input.txt | .\<YOUREXERCISENAME>>.exe
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::cin;

/* 

Exercise 9.23: In the first program in this section on page 346, what would
the values of `val`, `val2`, `val3`, and `val4` be if `c.size()` is `1`?

*/

int main()
{

    vector<int> c { 1 };

    if (!c.empty()) {
        // val and val2 are copies of the value of the first element in c
        auto val = *c.begin(), val2 = c.front();
        // val3 and val4 are copies of the of the last element in c
        auto last = c.end();
        auto val3 = *(--last); // can't decrement forward_list iterators
        auto val4 = c.back(); // not supported by forward_list


        cout << val << "\n"; // -> Value = 1
        cout << val2 << "\n"; // -> Equivalent to *c.begin(), Value = 1
        cout << &last << "\n"; // -> One past the end iterator, we cannot dereference coz of UB, return the address
        cout << val3 << "\n"; // -> Equivalent to *c.begin(), Value = 1
        cout << val4 << "\n"; // -> Equivalent to *(--last), Value = 1
    
    }


    return 0;
}
