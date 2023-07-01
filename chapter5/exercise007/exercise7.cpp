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

int get_value(){
    return 5;
}

int main()
{

    /*############################################################# */
    int ival1 = 5; int ival2 = 3;

    if (ival1 != ival2)
    ival1 = ival2; // MISSING SEMICOLON, added
else ival1 = ival2 = 0;

    /*############################################################# */


    int ival = 5; int minval = 4;
    int occurs;
    if (ival < minval){ // occurs will ever evaluate, no {} so only minval is executed, added {}
        minval = ival;
        occurs = 1;
    }

    /*############################################################# */

    // ival must be defined outside of if statemet
    // otherwise if it's not defined, in the second if we are trying
    // to do a check on a non existing object
    // moved outside the if and change second if to else
    int ival = get_value();
    if (ival)
        cout << "ival = " << ival << endl;
    else
        cout << "ival = 0\n";


    /*############################################################# */


    if (ival == 0) // Using "=" instead of comparison operator "=="
    ival = get_value();

    return 0;
}
