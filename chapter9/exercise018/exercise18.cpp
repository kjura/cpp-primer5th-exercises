#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <deque>

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

int main()
{
    std::deque<std::string> d {};
    cout << "Please provide your string input...\n";
    string line {  };
    while (getline(cin, line)) {
        d.push_back(line);
    }

    for (auto d_beg { d.cbegin() }; d_beg != d.cend(); d_beg++) {
        cout << *d_beg << "\n";
    }


    return 0;
}
