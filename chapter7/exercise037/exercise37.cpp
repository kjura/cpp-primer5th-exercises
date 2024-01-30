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
using std::istream;

class Sales_data {
    public:
        Sales_data(std::string s = "") : bookNo(s) {};

        Sales_data(std::string s, unsigned cnt, double rev) : bookNo(s), units_sold(cnt), revenue(rev * cnt) { };

        Sales_data(std::istream& is) { read(is, *this); };

        std::string isbn() const { return bookNo; };
        Sales_data& combine(const Sales_data&);
        double avg_price() const;
        std::string bookNo;
        unsigned units_sold = 0;
        double revenue = 0.0;
};

istream& read(istream& is, Sales_data& item){
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
};

// the values will be provided by a user
Sales_data first_item(cin); // ------------> Sales_data(std::istream& is) { read(is, *this); }


int main() {
    
    // bookNo will be an empty string
    Sales_data next; // ------------> Sales_data(std::string s = "") : bookNo(s) {};

    // bookNo will be 9-999-99999-9
    Sales_data last("9-999-99999-9"); // -----------> Sales_data(std::string s = "") : bookNo(s) {};

    return 0;
}
