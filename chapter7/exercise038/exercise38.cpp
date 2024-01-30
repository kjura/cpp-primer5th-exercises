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

/* class Sales_data;
istream& read(istream& is, Sales_data& item);
 */
class Sales_data {
    public:
        //Sales_data(std::string s = "") : bookNo(s) {};

        Sales_data(std::string s, unsigned cnt, double rev) : bookNo(s), units_sold(cnt), revenue(rev * cnt) { };
        Sales_data(std::istream& is = std::cin);
        Sales_data(std::string b) : bookNo(b) { };

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

Sales_data::Sales_data(std::istream& is) { read(is, *this); };


void print_sales(Sales_data& obj){
    cout << obj.bookNo << " " << obj.units_sold << " " << obj.revenue << "\n";
}

int main()
{

    Sales_data which_one = Sales_data();
    print_sales(which_one);

    return 0;
}
