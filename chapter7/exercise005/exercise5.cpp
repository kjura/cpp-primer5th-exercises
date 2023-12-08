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

struct Person {
    string name = "PLACEHOLDER";
    string address = "PLACEHOLDER";
    const string& getName() const {return name;};
    const string& getAddress() const {return address;};
};

int main()
{

    // These functions should be const
    // To be precise, the should be const Member Functions to indicate that they
    // cannot change the object on which they are called, they should only read name and address fields

    Person me;
    me.name = "John";
    me.address = "55th Avenue";
    cout << me.getName() << " " << me.getAddress() << "\n";

    return 0;
}
