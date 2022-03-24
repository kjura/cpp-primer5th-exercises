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

    auto len_s1 = s1.size();
    auto len_s2 = s2.size();

    if (s1 == s2){
        cout << "String " << s1 << " and string " << s2 << " are equal\n\n";
    }

    else{

        if (s1 > s2){
            cout << "String " << s1 << " is greater than string " << s2 << "\n\n";
        }

        else {
            cout << "String " << s2 << " is greater than string " << s1 << "\n\n";
        }
    }

    


    if (len_s1 == len_s2){
        
        cout << "String " << s1 << " and string " << s2 << " have the same length\n";

    }

    else{

        if (len_s1 > len_s2){
            cout << "String " << s1 << " is longer than string " << s2 << "\n";
        }

        else {
            cout << "String " << s2 << " is longer than string " << s1 << "\n";
        }

    }


    return 0;
}