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
        max_dup = "No duplicates";
        outer_counter = 1;
    }

    cout << max_dup << ": " << outer_counter << endl;


    // for (; begin_outer_data != end_outer_data; ++begin_outer_data){

    //     //cout << "Outer loop points to " << std::addressof(*begin_outer_data) << "\n";
    //     //cout << "Outer loop holds: " << *begin_outer_data << "\n";

    //     for (auto begin_inner_data {data.begin()}; begin_inner_data != end_outer_data; ++begin_inner_data){

    //         if (std::addressof(*begin_inner_data) != std::addressof(*begin_outer_data)){
    //             if (*begin_outer_data == *begin_inner_data){
    //                 ++inner_counter;
    //             }
    //         }

    //         //cout << *begin_inner_data << " "; 

    //         //cout << "Inner loop points to " << std::addressof(*begin_inner_data) << "\n";
    //     }

    //     if (inner_counter > outer_counter){
    //         outer_counter = inner_counter;
    //         inner_counter = 0;
    //         max_dup = *begin_outer_data;
    //     }

    //     //cout << "\n";
    //     //cout << "Next iteration\n";

    // }



    return 0;
}
