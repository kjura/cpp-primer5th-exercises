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

string edit_name(string& n, const string& prefix, const string& suffix) {
    string new_name { n };
    new_name.insert(new_name.begin(), ' ');
    new_name.insert(new_name.begin(), prefix.begin(), prefix.end());
    new_name.append(" ");
    new_name.append(suffix);

    return new_name;
}

int main()
{

    string name { "Charles" };

    // Mr. or Ms.
    // III or Jr.

    string new_name { edit_name(name, "Mr.", "III") };

    cout << name << "\n";
    cout << new_name << "\n";

    return 0;
}
