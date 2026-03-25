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

// Exercise 9.43: Write a function that takes three `string`s, `s`, `oldVal`, and
// `newVal`.
// 
// 
//  Using iterators, and the `insert` and `erase` functions replace all
// instances of `oldVal` that appear in `s` by `newVal`. Test your function by
// using it to replace common abbreviations, such as “tho” by “though” and
// “thru” by “through”.


void three_strings(string& s, const string& oldVal, const string& newVal) {


    for (auto it = s.begin(); it < s.end(); ++it) {

        auto pos = it;
        auto pat { oldVal.cbegin() };
        for (;  ((it < s.cend()) & (pat < oldVal.cend())) &  (*it == *pat); ) {
            ++it;
            ++pat;
        }

        if (it >= s.end()) {
            break;
        }

        if (pat == oldVal.cend()) {

            // pos =  { s.erase(pos, it) };
            it = s.insert(
                s.erase(pos, it), 
                newVal.cbegin(), 
                newVal.end()
            );
        }

    }

}

int main()
{

    string s_1 { "We managed to win tho it tho was tho hard." };
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

    // string buka { "buka|tho|buka" };
    // cout << buka << "\n";
    // three_strings(buka, "tho", "though");
    // cout << buka << "\n";

    return 0;
}
