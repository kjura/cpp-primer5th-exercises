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

    // Constructors with initalizers list DEFINITION
    Sales_data(const string& isbn, unsigned books_sold, double price_for_book) : bookNo(isbn), units_sold(books_sold), revenue(price_for_book * books_sold) {};



    // second one with bookNo being initalized
    Sales_data(const string& isbn) : bookNo(isbn) {};


    // declaration of istream constructor
    Sales_data(std::istream& input);



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


//DEFINITION of istream constructor
Sales_data::Sales_data(std::istream& input){
    read(input, *this);
}

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
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}

int main()
{

    // First, default constructor
    Sales_data my_default;

    // List initalizer
    Sales_data long_list_init("a-new-book", 2, 69.69);

    // Again list initalizer but simple
    Sales_data("my-only-isbn");

    // Last one with streams
    Sales_data(cin);
    

    return 0;
}
