#include <iostream>
#include <vector>
#include <cmath>
#include <string>

// g++ -std=c++20 -pedantic -Wall -Wextra -Werror -Wshadow -Wsign-conversion -g sandbox.cpp  -o sandbox
// g++ -std=c++20 -pedantic -Wall -Wextra -Wsign-conversion -g sandbox.cpp -o sandbox
// <br />
// PLACEHOLDEREXERCISENAME < input.txt > output.txt
// PLACEHOLDEREXERCISENAME ./exercise5 < input.txt >> output.txt
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::cin;


struct Sales_data {

    string isbn() const {return bookNo;}
    Sales_data& combine(const Sales_data&);

    std::string bookNo;
    unsigned units_sold = 5;
    double revenue = 0.0;

};

Sales_data& Sales_data::combine(const Sales_data& rhs){
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
};

int main()
{


    return 0;
}
