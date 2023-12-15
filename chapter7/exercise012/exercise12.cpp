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

struct Sales_data {

    // First default constructor (DECLARATION only inside the class body)
    Sales_data();

    // declaration of istream constructor:
    //Sales_data(std::istream& input);
    // Now, we're changing it to an inside definition

    Sales_data(std::istream& input) {read(input, *this);}




    // other members as before
    std::string isbn() const { return bookNo; }
    Sales_data& combine(const Sales_data&);
    double avg_price() const;
    std::istream& read(std::istream& is, Sales_data& item);
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

// DEFINITION of default constructor 
Sales_data::Sales_data() = default;

double Sales_data::avg_price() const{
    if (units_sold){
        return revenue / units_sold;
    }
    else{
        return 0.0;
    }
};

std::istream& Sales_data::read(std::istream& is, Sales_data& item){
    
    double price = 0;
    cout << "Plase provide a book's isbn, units sold and price seperated by spaces " << "\n";
    is >> item.bookNo >> item.units_sold >> price;
    cout << "Items provided" << "\n";
    item.revenue = price * item.units_sold;
    return is;
}

int main()
{

    Sales_data stream_constructor(cin);


    return 0;
}
