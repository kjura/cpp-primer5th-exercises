#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <list>

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

    // How would you initialize a `vector<double>` from a
    // `list<int>`? From a `vector<int>`? Write code to check your answers.

    std::list<int> l { 42, 24, 1984, 19, 84, 4891 };
    std::vector<int> vec_int { 67, 68, 70, 71 };

    std::vector<double> vec_double_1(vec_int.cbegin(), vec_int.cend());
    std::vector<double> vec_double_2(l.cbegin(), l.cend());


    for (const auto e : vec_double_1) {
        cout << e << endl;
    }
    for (const auto e : vec_double_2) {
        cout << e << endl;
    }


    return 0;
}
