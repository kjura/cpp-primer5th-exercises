#include <algorithm>
#include <string>
#include <iostream>

// g++ -std=c++20 -pedantic -Wall -Wextra -Werror -Wshadow -Wsign-conversion -g exercise4.cpp  -o exercise4
// g++ -std=c++20 -pedantic -Wall -Wextra -Wsign-conversion -g exercise4.cpp -o exercise4
// <br />

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
    
    string s1, s2;

    cout << "Please provide string s1 ";
    cin >> s1;
    cout << "\nPlease provide string s2 ";
    cin >> s2;

    if (s1 == s2){
        cout << "String " << s1 << " and string " << s2 << " are equal\n";
    }

    else{

        if (s1 > s2){
            cout << "String " << s1 << " is greater than string " << s2 << "\n";
        }

        else {
            cout << "String " << s2 << " is greater than string " << s1 << "\n";
        }
    }


    return 0;
}