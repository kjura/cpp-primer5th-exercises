#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <array>
#include <algorithm>

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
using std::array;


template <typename T>
void print_collection(const T& c) {

    for (const auto& e : c) {
        cout << e << " ";
    }

    cout << "\n";
}



int main()
{


    array arry { 2, 4, 6, 8, 10 };
    print_collection(arry);
    cout<< "Array after fill_n" << "\n";
    std::fill_n(arry.begin(), arry.size(), 0);
    print_collection(arry);


    return 0;
}
