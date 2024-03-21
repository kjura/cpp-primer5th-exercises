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

class Sales_data {
    public:

        // constructors
        Sales_data() = default;
        explicit Sales_data(const std::string &s): bookNo(s) { }
        Sales_data(const std::string &s, unsigned n, double p):
                bookNo(s), units_sold(n), revenue(p*n) { }
        Sales_data(std::istream &);

        Sales_data& combine(const Sales_data& rhs) const;

    private:
        std::string bookNo;
        unsigned units_sold = 0;
        double revenue = 0.0;
};

Sales_data& Sales_data::combine(const Sales_data& rhs) const
{
	units_sold += rhs.units_sold; // add the members of rhs into 
	revenue += rhs.revenue;       // the members of ``this'' object
	return *this; // return the object on which the function was called
}

int main()
{


    // (a) Sales_data &combine(Sales_data);
    // (b) Sales_data &combine(Sales_data&);
    // (c) Sales_data &combine(const Sales_data&) const;

    // i is some Sales_data object
    // i = Sales_data()
    // s is a string
    // std::string s = "some isin or else"

    // (a) // Compile error (c++20): Cannot convert std::string to Sales_data
    // no suitable user-defined conversion from "std::string" to "Sales_data" exists
    // to make it work we would have to remove explicit keyword from the constructor

    // (b) 
    // Same as before --> error: cannot convert 'std::string' {aka 'std::__cxx11::basic_string<char>'} to 'Sales_data&'

    // (c)
    // Error, constness of units_sold and revenue (expression must be a modifiable lvalue)
    

    return 0;
}
