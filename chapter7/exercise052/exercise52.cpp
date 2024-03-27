#include <iostream>
#include <vector>
#include <cmath>
#include <string>

// g++ -std=c++20 -pedantic -Wall -Wextra -Werror -Wshadow -Wsign-conversion -g sandbox.cpp  -o sandbox
// g++ -std=c++20 -pedantic -Wall -Wextra -Werror -Wshadow -Wsign-conversion -g exercise52.cpp  -o exercise52
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


struct Sales_data {
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

int main()
{

    // it compiles for c++20 and c++17 and c++14
    // it doesnt compile for c++11, would have to erase in-class initializers
    // exercise52.cpp:31:51: error: could not convert ‘{"978-0590353403", 25, 1.599e+1}’ 
    // from ‘<brace-enclosed initializer list>’ to ‘Sales_data’
    Sales_data item = {"978-0590353403", 25, 15.99};

    cout << item.bookNo << " " << item.units_sold << " " << item.revenue << endl;



    return 0;
}
