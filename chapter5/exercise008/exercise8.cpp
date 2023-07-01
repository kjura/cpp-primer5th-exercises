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

    /* dangling else -- Colloquial term used to refer to the problem of how to process
    nested if statements in which there are more ifs than elses. In C++, an else
    is always paired with the closest preceding unmatched if. Note that curly braces
    can be used to effectively hide an inner if so that the programmer can control
    which if a given else should match. */

    // Worth to mention that new compilers are great and for g++ [-Werror=misleading-indentation] will give a warning

    bool firstCond = false;
    bool secondCond = true;

    // Thought process: If firstCond is false then print Hello else
    // But else only gets executed when firstCond and secondCond are both false

    // firstCond == false and secondCond == true ==> else is not executed
    // else is connected to secondCond conditional and NOT to firstCond!!!
    if (firstCond)
        if (secondCond)
            cout << "Hello" << endl; // firstCond and secondCond are both true
        else                          
            cout << "Hello else" << endl;    // firstCond false and second Calse false      
    cout << "Always hello" << endl;       // This is always executed


    // In C++, an else is always paired with the closest preceding unmatched if
    // Use the braces Luke!
    return 0;
}
