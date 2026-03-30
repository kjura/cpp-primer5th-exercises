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

template<typename T>
void dbg_print(const T& a) {
    cout << a << "\n";
}

void represent_string_boxes(const string& s);

void three_strings(string& s, const string& oldVal, const string& newVal) {

    for (unsigned i { 0 }; i < s.size(); ++i) {

        unsigned pos = i;
        unsigned pat { 0 };
        for (;  ((i < s.size()) & (pat < oldVal.size())) &  (s[i] == oldVal[pat]); ) {
            ++i;
            ++pat;
        }


        if (pat == oldVal.size()) {

            s.replace(
                pos, oldVal.size(), newVal
            );

        }

    }

}

void print_horizontal_line(const string& s) {
    for (unsigned i { 0 }; i < (6 * s.size()); ++i) {
        cout << "-";
    }
    cout << "\n";
}


void represent_string_boxes(const string& s) {
    print_horizontal_line(s);
    for (unsigned i { 0 }; i < s.size(); ++i) {
        if (i < 30) {
            cout << "|" << s[i] << "|" << " ";
        }
        else {
            cout << "|" << s[i] << " |" << " ";
        }
    }
    cout << "\n";
    for (unsigned i { 0 }; i < s.size(); ++i) {
        if (i < 10) {
            cout << "|" << i << "|" << " ";
        }
        else {
            cout << "|" << i << "|" << " ";
        }
    }
    cout << "\n";
    print_horizontal_line(s);
}


int main()
{

    string s_1 { "We managed to win tho it tho was tho hard." }; // [19, 21] --> though 
    string s_2 { "thru the fire and flames" };
    string s_3 { "nothing to report" };

    cout << "s_1: " << s_1 << "\n";
    cout << "s_2: " << s_2 << "\n";
    cout << "s_3 " << s_3 << "\n";
 
    three_strings(s_1, "tho", "though");
    three_strings(s_2, "thru", "through");
    three_strings(s_3, "tho", "though");

    cout << "After change " << "s_1: " << s_1 << "\n";
    cout << "After change " << "s_2: " << s_2 << "\n";
    cout << "After change " << "s_3: " << s_3 << "\n"; 

    return 0;
}
