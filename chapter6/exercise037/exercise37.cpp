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


// returns a reference to an array of ten strings

string words[10] = {"WORD"};


// Using type alias
using ArrRefTenStr = string[10];
ArrRefTenStr& reffie_type_alias(); // We can't return the whole array, we can only return a pointer to this array (first element)


// Using a trailing return

auto reffie_trailing() -> string(&)[10];


// Using decltype

decltype(words)& reffie_decltype();


int main()
{

    // I prefer to use a trailing return, it's faster and less of a hassle to quickly declare a function
    // that returns a reference to an array


    return 0;
}
