#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <memory>

// g++ -std=c++20 -pedantic -Wall -Wextra -Werror -Wshadow -Wsign-conversion -g sandbox.cpp  -o sandbox
// g++ -std=c++20 -pedantic -Wall -Wextra -Wsign-conversion -g sandbox.cpp -o sandbox
// <br />
// PLACEHOLDEREXERCISENAME < input.txt > output.txt
// PLACEHOLDEREXERCISENAME ./exercise5 < input.txt >> output.txt
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::cin;

int main()
{

    /* The program will not work if there is an equal number of duplicates 
    
    Example: cow cow cat cat dog dog
    
     */

    string input {};
    vector<string> data {};

    cout << "Provide your input string, if you're done, hit ctrl+D ...\n";
    while (cin >> input) {
        data.push_back(input);
    }

    cout << "File loading to vector completed ... This is your vector now ...\n";
    for (const auto& e : data){
        cout << e << " "; 
    }

    cout << "\n";

    auto begin_outer_data {data.begin()};
    auto end_outer_data {data.end()};
    unsigned int inner_counter {0};
    unsigned int outer_counter {0};
    string max_dup {};


    for (const auto& i : data){
        for (const auto& j : data){
            if (i == j){
                ++inner_counter;
            }
        }

        if (inner_counter > outer_counter){
            outer_counter = inner_counter;
            max_dup = i;
        }

        inner_counter = 0;

    }

    if (outer_counter == 1){
        cout << "No duplicates" << endl;
    }
    else {
        cout << max_dup << ": " << outer_counter << endl;
    }


    return 0;
}
