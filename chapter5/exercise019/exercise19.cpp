#include <iostream>
#include <vector>
#include <cmath>
#include <string>

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

    string input_one {};
    string input_two {};
    do {
        cout << "Provide two strings seperated by a space" << "\n";
        cin >> input_one >> input_two;
        if (input_one.size() < input_two.size()) {
            cout << "Second string is greater than the other" << "\n";
        }
        else { if (input_one.size() > input_two.size()) {
            cout << "First string is greater than the other" << "\n";
        }

        else {
            cout << "Two strings are equal" << "\n";
        }
        }

    } while(input_one.size() != input_two.size());


    return 0;
}
