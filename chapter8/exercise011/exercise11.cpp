#include <iostream>
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

struct PersonInfo {
 string name; 
 vector<string> phones;
};


void print(std::vector<PersonInfo>& vec) {
    for (const auto& e : vec) {
        cout << e.name << " ";
        for (const auto& number : e.phones) {
            cout << number << " ";
        }
        cout << "\n";
    }
}

void print_state(std::istringstream& ss){
    cout << ss.rdstate() << endl;
}

int main()
{

    string line, word; 

    vector<PersonInfo> people;
    std::istringstream record(line); 

    while (getline(cin, line)) {
        PersonInfo info;
        record.str(line); 
        record >> info.name; 

        while (record >> word) { 
            info.phones.push_back(word);
        } 

        // print_state(record);

        if ( record.eof() ) {
            cout << "EOF reached, must clear the state before next stream operation\n";
        }

        people.push_back(info);

        record.str("");
        record.clear(); // Have to reset flag, after inner loop end, iss is in an error state
        // have to clear the state again to a valid state so it can accept the next input

        // print_state(record);
    }

    cout << "End-Of-File reached (or key combination pressed), here is your people vector with objects...\n";
   
    print(people);


    return 0;
}
