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

unsigned int count_sequence(){
    static unsigned int seq {0};
    // Use the unchaged value and then increase by 1, handy for generating zero first
    // I also thought about using -1 at first, and then generate 0 with ++seq but I lose unsigned that way
    return seq++; // clever, thanks to https://github.com/jaege/Cpp-Primer-5th-Exercises/blob/master/ch6/6.7.cpp#L3
}

int main()
{
    cout << "Enter any value to start calling count_sequence()\n";
    cout << "On Linux, press Ctrl + D to abort, on Windows, press Ctrl + Z followed by Enter\n";
    string input {};
    while (std::getline(cin, input)){
        cout << count_sequence() << "\n";
    }


    return 0;
}
