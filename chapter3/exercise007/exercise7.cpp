#include <algorithm>
#include <string>
#include <iostream>

// g++ -std=c++20 -pedantic -Wall -Wextra -Werror -Wshadow -Wsign-conversion -g exercise5.cpp  -o exercise5
// g++ -std=c++20 -pedantic -Wall -Wextra -Wsign-conversion -g exercise5.cpp -o exercise5
// <br />

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
    
    string empty_str;
    cout << "Please provide a string with all lowercase letters" << endl;
    if (cin >> empty_str){

        for (char c : empty_str){

            c =  'X'; // Nothing happens, c is unused
            // We need a reference to change letters to 'X's

        }

        cout << empty_str << endl;

    }


    cout << "End of the program" << endl;

    return 0;
}