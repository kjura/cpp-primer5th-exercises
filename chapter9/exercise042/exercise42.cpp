#include <iostream>
#include <vector>
#include <cmath>
#include <string>

// g++ -std=c++20 -pedantic -Wall -Wextra -Werror -Wshadow -Wsign-conversion -g sandbox.cpp  -o sandbox
// g++ -std=c++20 -pedantic -Wall -Wextra -Wsign-conversion -g sandbox.cpp -o sandbox
// <br />
// PLACEHOLDEREXERCISENAME < input.txt > output.txt
// PLACEHOLDEREXERCISENAME ./exercise5 < input.txt >> output.txt
// Redirection in powershell  Get-Content .\input.txt | .\<YOUREXERCISENAME>>.exe
using std::cout;
using std::vector;
using std::string;


int main()
{

    vector<char> cs {
        'a', 'b', 'c', 'd', 'e', 'x', 'c', 'z', 'e', 'r',
        'v', 's', 'j', 'c', 'n', 'j', 'd', 'j', 'd', 'a',
        'h', 's', 'b', 'u', 'r', 'd', 'a', 't', 'u', 'q',
        'c', 'n', 's', 'h', 'w', 'g', 's', 'j', 'x', 'a',
        'x', 'h', 'e', 'w', 'q', 'b', 's', 'y', 'w', 'j',
        'x', 'b', 'w', 'j', 'v', 'w', 'e', 'j', 's', 'a',
        'd', 'b', 'x', 't', 'w', 'q', 's', 'a', 'k', 's',
        'm', 'n', 'b', 'v', 'c', 'x', 'z', 'z', 'a', 'd',
        'l', 'k', 'j', 'h', 'r', 'e', 'w', 'q', 'w', 'e',
        'l', 'j', 'g', 'f', 'd', 's', 'a', 'S', 'D', 'S',
        'q', 'w', '1', '2', '3', '4', '5', '6', '7', '8',
        'e', 'y', 'o', 'i', 'u', 'r', 'r', 't', 'f', 'g',
        'f', 'g', 'h', 'j', 'k', 'l', 'b', 'v', 'c', 'x',
    };

    string input { };
    input.reserve(100); // We can reserve memory for at least 100 characters before 
    // reading into a string
    
    input.assign(cs.begin(), cs.end());

    cout << input << "\n";

    return 0;
}
