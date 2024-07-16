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

Exercise 9.21: Explain how the loop from page 345 that used the return from `insert`
to add elements to a `list` would work if we inserted into a `vector` instead.

 */

int main()
{

    std::list<string> lst;
    auto iter = lst.begin();
    string word { };
    while (cin >> word){
        iter = lst.insert(iter, word); // same as calling push_front
    }

    return 0;
}
