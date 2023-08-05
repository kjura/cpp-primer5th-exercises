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
    cout << "Please provide two integers seperated by a space\n";
    int input_one {}, input_two {}; // input_two should be checked for taking 0 as a value
    cin >> input_one >> input_two;
    int result = input_one / input_two; // No checks for zero, possible UB
    cout << result << endl;


    return 0;
}
