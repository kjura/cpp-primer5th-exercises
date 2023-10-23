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


// Consider a really long string, we want to transform it and then return back to the caller
// It would be expensive to operate on a copy of that string, hence we pass this string by reference to
// save time and resources

std::string transform_string_reference(std::string& our_str){};

// We could pass by value in a given scenario: we need to do something with some object
// But we cannot interfere with the original object, we will operate on a copy
// and return our calculations leaving our original object alone
// bonus from learncpp.com (thanks Alex!): Fundamental types are cheap to copy, so they are typically passed by value.

int do_heavy_computations(int heavy){};

int main()
{




    return 0;
}
