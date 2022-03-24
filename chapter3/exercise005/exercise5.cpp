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
    
    string one_large_string, temp_str;

    cout << "Please enter a string" << "\n";
    while (cin >> temp_str){

        cout << "\nPlease enter a string" << "\n";
        one_large_string += temp_str + " ";
        
    }

    cout << "\nConcatenated string " << one_large_string << "\n\n";







    return 0;
}