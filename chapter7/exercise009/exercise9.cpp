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

std::istream& read(std::istream& is, Person& human){
        is >> human.name >> human.address;
        return is;
    }

std::ostream& print(std::ostream& os, const Person& human){
    os << human.getName() << " " << human.getAddress();
    return os;
}

int main()
{

    // These functions should be const
    // To be precise, the should be const Member Functions to indicate that they
    // cannot change the object on which they are called, they should only read name and address fields

    Person me;
    cout << "Give me name and address" << "\n";
    read(cin, me);
    print(cout, me);

    return 0;
}