#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <cctype>
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
    string entry_just_before_input {};
    bool repetition = false;
    while (cin >> input){

        if ( !input.empty() and !std::isupper(input[0]) ){
            //cout << "continue for " << input << "\n";
            continue;
        } 

        if ((entry_just_before_input == input)){

            cout << "The word " << input << " occurs twice in succession" << "\n";
            repetition = true;
            break;
        }
        else {
            entry_just_before_input = input;
        }

    }

    if (!repetition){
        cout << "There were no repetitions" << endl;
    }



    return 0;
}
