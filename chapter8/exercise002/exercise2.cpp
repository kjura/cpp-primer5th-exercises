#include <iostream>
#include <fstream>
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

std::istream& take(std::istream& beck) {

    std::string container;
    cout << "Enter your input\n";
    while (1) {

        beck >> container;
        if (!beck.eof()) {
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

    take(cin);
    cout << "State of istream is: " << cin.rdstate() << "\n";

    return 0;
}
