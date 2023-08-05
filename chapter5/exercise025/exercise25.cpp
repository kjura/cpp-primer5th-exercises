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

    int input_one {}, input_two {}, result {}; // input_two should be checked for taking 0 as a value
    cout << "Please provide two integers seperated by a space\n";
    while (true){
        try {

            cin >> input_one >> input_two;
            if (input_two == 0){
                throw std::runtime_error("Second input cannot be zero to avoid division by zero");
            }
            result = input_one / input_two;
            break;

        }
        catch (const std::runtime_error& err){
            cout << err.what() << "\n";
            cout << "Please provide a new set of numbers for which the second one is not zero\n";
            continue;
        }
    }

    cout << "The divsion of two ints is " << result << endl;


    return 0;
}
