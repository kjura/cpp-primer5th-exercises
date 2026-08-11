#include <iostream>
#include <numeric>
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

    const vector<int> v { 1, 2, 3, 4 };
    // Note that std::accumulate is in <numeric> and NOT in <algorithm>
    const int s { std::accumulate(v.cbegin(), v.cend(), 0) };
    cout << s << "\n";

    return 0;
}
