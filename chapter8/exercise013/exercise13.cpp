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
using std::ostringstream;
using std::cerr;
using std::istringstream;

struct PersonInfo {
    string name;
    vector<string> phones;
};

bool valid(const std::string& str) {

    if (str.size() != 9) {
        return false;
    }
    else {
        return true;
    }
    
}

/* 

string str = "kuba"
string& ref_str = str;
format (ref_str)
 */

std::string& format(std::string& str){

    str = "+48" + str;
    str = str.substr(0, 3) + "-" + str.substr(3, 6) + "-" + str.substr(6, 9);

    return str;

}


int main()
{

    string line, word; // will hold a line and word from input, respectively
    vector<PersonInfo> people; // will hold all the records from the input
    // read the input a line at a time until cin hits end-of-file (or another error)
    while (getline(cin, line)) {

        PersonInfo info; // create an object to hold this record’s data
        istringstream record(line); // bind record to the line we just read
        cout << "Read the name and phone numbers separated by spaces\n";
        record >> info.name; // read the name

        while (record >> word){ // read the phone numbers
            info.phones.push_back(word); // and store them
        }
        people.push_back(info); // append this record to people
    }

    for (const auto &entry : people) { // for each entry in people
        ostringstream formatted, badNums; // objects created on each loop
        for (const auto &nums : entry.phones) { // for each number
            if (!valid(nums)) {
                badNums << " " << nums; // string in badNums
            } 
            
            else {
                // ‘‘writes’’ to formatted’s string
                auto temp = format(nums);
                // formatted << " " << format(nums);
                formatted << " " << temp;
            }

            }

            if (badNums.str().empty()) { // there were no bad numbers

                // print the name
                cout << entry.name << " " << formatted.str() << "\n"; // and reformatted numbers

            }

            else { 
                
                // otherwise, print the name and bad numbers
                cerr << "input error: " << entry.name << " invalid number(s) " << badNums.str() << "\n";

            }
    }

    return 0;
}
