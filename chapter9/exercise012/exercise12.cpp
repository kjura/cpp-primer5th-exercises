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

    std::vector<int> vec { 1, 2, 3, 4, 5, 6, 7, 8};

    std::vector<int> copy_container { vec }; // the container and element types must match

    auto beg { vec.cbegin() };
    auto it { beg + 3 }; 

    // left inclusive interval
    std::vector<int> iterator_range_container (beg, it); // the container types need not to be identical
    // the element types in the new and original containers can differ as long as it is possible to convert the elements we're copying to the element type
    // of the container we are initalizing

    for (const auto e : iterator_range_container) {
        cout << e << endl;
    }

    cout << *it << endl;

    return 0;
}
