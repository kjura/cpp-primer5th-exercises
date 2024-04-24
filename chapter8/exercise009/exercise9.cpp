#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <sstream>
#include <ostream>

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
using std::istringstream;

struct PersonInfo {
    string name;
    vector<string> phones;
};

std::ostream& print(std::ostream& out, const vector<PersonInfo>& item) {

    for (const auto& person_element : item) {
        out << person_element.name << " ";
        for (const auto& e : person_element.phones) {
            out << e << " ";
        }

        out << "\n";
    }

    return out;
}

int main()
{

    string line, word; // will hold a line and word from input, respectively
    vector<PersonInfo> people; // will hold all the records from the input
    // read the input a line at a time until cin hits end-of-file (or another error)
    while (getline(cin, line)) {
        PersonInfo info; // create an object to hold this record’s data
        istringstream record { line }; // bind record to the line we just read
        record >> info.name; // read the name
        while (record >> word) { // read the phone numbers
        info.phones.push_back(word); // and store them
        } 

        people.push_back(info); // append this record to people
    }

    print(cout, people) << "\n";


    return 0;
}
