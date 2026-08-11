#include <cstring>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

// g++ -std=c++20 -pedantic -Wall -Wextra -Werror -Wshadow -Wsign-conversion -g sandbox.cpp  -o sandbox
// g++ -std=c++20 -pedantic -Wall -Wextra -Wsign-conversion -g sandbox.cpp -o sandbox
// <br />
// PLACEHOLDEREXERCISENAME < input.txt > output.txt
// PLACEHOLDEREXERCISENAME ./exercise5 < input.txt >> output.txt
// Redirection in powershell  Get-Content .\input.txt | .\<YOUREXERCISENAME>>.exe
using std::cout;
using std::string;


// Apparently enum can be more expensive than empty structs
// enum class WithNullTerminator {
//     flag
// };

// enum class NoNullTerminator {
//     flag
// };


struct WithNullTerminator {};
struct NoNullTerminator {};

unsigned calculate_c_str_length(const char s[], WithNullTerminator) {
    unsigned i { 0 };
    while (s[i] != '\0') {
        ++i;
    }
    return i + 1;
}

unsigned calculate_c_str_length(const char s[], NoNullTerminator) {
    unsigned i { 0 };
    while (s[i] != '\0') {
        ++i;
    }
    return i;
}

int main()
{

    // First of all, cbegin/cend will not work: array is not a class and does not have members
    // Second, it will run just fine, remember to make sure roster2 has at least the same number of elements as roster1
    // operator== can be used to compare chars

    // char str[] { "" };
    // cout << "Examined string (might be empty): " << str << "\n";
    // cout << "length with null: " << calculate_c_str_length(str, WithNullTerminator {}) << "\n";
    // cout << "length no null: " << calculate_c_str_length(str, NoNullTerminator {}) << "\n";
    // cout << "length no null using strlen(): " << std::strlen(str) << "\n"; 


    // Watch out! Make sure roster2 has at least the same number of elements as roster1 
    const char roster1[] { "qwe" };
    const char roster2[] { "qwe" };

    // equal(roster1.cbegin(), roster1.cend(), roster2.cbegin()); DOES NOT COMPILE, C-style arrays have no member functions
    
    bool is_equal { std::equal(std::cbegin(roster1), std::cend(roster1), std::cbegin(roster2)) };

    if (is_equal) {
        cout << "roster1 and roster2 are equal" << "\n";
    }
    else {
        cout << "roster1 and roster2 are NOT equal" << "\n";
    }


    return 0;
}
