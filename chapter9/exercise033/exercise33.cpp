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

template<typename T>
void print(const vector<T>& vec) {
    for (const auto& e : vec) {
        cout << e << " ";
    }   
    cout << "\n";
}

int main()
{

    // UNDEFINED BEHAVIOUR
    // After insert there is a reallocation of the container leaving all references invalid

    vector<int> v { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    auto begin { v.begin() };
    while (begin != v.end()) {
        ++begin; 
        v.insert(begin, 42); // UNDEFINED BEHAVIOUR, should be begin = v.insert(begin, 42);
        ++begin;
    }

    // UNDEFINED BEHAVIOUR

    print(v);

    return 0;
}
