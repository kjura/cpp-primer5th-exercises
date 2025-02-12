#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <list>
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

Write a program to assign the elements from a `list` of
char* pointers to C-style character strings to a `vector` of `strings`.

 */

int main()
{
    
    std::list<char const*> l { {"style", "string", "something"} };

    std::vector<std::string> v;
    v.assign(l.cbegin(), l.cend());

    for (const auto& e : v) {
        cout << e << endl;
    }



    return 0;
}
