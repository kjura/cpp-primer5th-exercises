#include <iostream>

// g++ -std=c++20 -pedantic -Wall -Wextra -Werror -Wshadow -Wsign-conversion -g sandbox.cpp  -o sandbox
// g++ -std=c++20 -pedantic -Wall -Wextra -Wsign-conversion -g sandbox.cpp -o sandbox
// <br />
// PLACEHOLDEREXERCISENAME < input.txt > output.txt
// PLACEHOLDEREXERCISENAME ./exercise5 < input.txt >> output.txt
using std::cout;
using std::endl;


// compare the length of two strings
// Would it be possible to define isShorter as a constexpr?


using std::string;

constexpr bool isShorter(const string& s1, const string& s2)
{
    return s1.size() < s2.size();
}

int main()
{


    // Would it be possible to define isShorter as a constexpr?

    // Compiling for C++11/14/17 this yields error: .size() is not constexpr

    //  warning: call to non-'constexpr' function 'std::__cxx11::basic_string<_CharT, _Traits, _Alloc>::size_type std:  
    // 20 |     return s1.size() < s2.size();
    //   |            ~~~~~~~^~


    // But for c++20 this will work (why?)

    

    // bool result = isShorter("John", "DoeDoe");
    // cout << result << endl;

    return 0;
}
