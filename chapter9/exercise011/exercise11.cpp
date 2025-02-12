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
using std::endl;
using std::vector;
using std::string;
using std::cin;

int main()
{


    std::vector<int> v1; // empty vector default initalization
    std::vector<int> v2 {42, 2, 4}; // // C++11 initializer list syntax {42, 2, 4}
    std::vector<int> v3 = {1, 2, 3}; // copy-initalization {1, 2, 3}
    std::vector<int> v4(9, 4); //direct-initalization  {4, 4, 4, 4, ... 9 times}
    std::vector<int> v5(v4); // direct-initalization v5 == v4
    std::vector<int> v6 = v4; // copy-initalization v6 == v4


    return 0;
}
