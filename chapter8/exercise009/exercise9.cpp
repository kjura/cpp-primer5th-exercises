#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
#include <string>
#include <sstream>

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

std::istream& take(std::istream& beck) {

    std::string container;
    while (1) {

        if (!beck.eof()) {
            beck >> container;
            cout << container << "\n";
        }
        else {
            break;
        }
        
    }
    beck.clear();
    return beck;
}

int main()
{

    std::istringstream ss {};
    std::string ss_string_input {};
    cout << "Enter you stringstream\n";
    std::getline(cin, ss_string_input);
    ss.str(ss_string_input);
    take(ss);
    cout << "State of istream is: " << cin.rdstate() << "\n";

    return 0;
}
