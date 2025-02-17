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

    // vector<int> super_vector {  };
    // cout << super_vector.at(0) << "\n"; // If pos arg is not within the range of the container, an exception of type std::out_of_range is thrown.
    // cout << super_vector[0] << "\n"; // An out-of-range value for an index is UB
    // cout << super_vector.front() << "\n"; // Calling front on an empty container causes undefined behavior.
    // cout << *super_vector.begin() << "\n"; // Dereferencing begin on an empty container causes undefined behavior.



    vector<int> proper_vector { 2, 4, 6, 8, 10 };

    // Fetch the first elemet using at
    cout << proper_vector.at(0) << "\n";

    // Fetch the first elemet using the subscript operator
    cout << proper_vector[0] << "\n";

    // Fetch the first elemet using front() member function
    cout << proper_vector.front() << "\n";

    // Fetch the first elemet using back() member function
    cout << *proper_vector.begin() << "\n";
    // Note -> doesn't make sense for a vector because: proper_vector->begin() would imply (*proper_vector).begin() and a vector is not a pointer

    return 0;
}
