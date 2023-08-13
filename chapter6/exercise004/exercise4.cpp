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


int fact(int n){

    int result {1};
    for (; n > 0; --n){
        result *= n;
    }

    return result;
}

int main()
{
    // This is UB for numbers > 12, int overflow
    cout << "Please provide a non-negative integer to calculate the factorial out of it ...\n";
    int input {};
    cin >> input;

    if (input > 12){
        cout << "Program supports only values up to 12, terminating ...\n";
        return 0;
    }

    int result = fact(input);
    cout << input << "! is equal to " << result << "\n";  

    return 0;
}
