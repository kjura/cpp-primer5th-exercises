#include <iostream>
#include <numeric>
#include <vector>

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

    // There is an implicit conversion from double to int when we use 0
    // -Werror flag should catch that though, preventing from narrowing conversion (from int to double)

    const vector<double> v { 1.2, 2.2, 3.2, 4.2, 5.2 };
    // const double s { std::accumulate(v.cbegin(), v.cend(), 0) }; DOES NOT COMPILE
    const double s { std::accumulate(v.cbegin(), v.cend(), 0.0) }; 
    cout << s << "\n";

    return 0;
}
