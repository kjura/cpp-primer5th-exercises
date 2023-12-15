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

    Sales_data(const std::string& bookId="empty",
            unsigned books_sold=69,
            double price=666)
            : bookNo(bookId), units_sold(books_sold) {revenue = price * books_sold;}; 

    Sales_data(std::istream& input);

    Sales_data(const std::string& isbn, [[maybe_unused]] int test) : bookNo(isbn) {};


    // other members as before
    std::string isbn() const { return bookNo; }
    Sales_data& combine(const Sales_data&);
    double avg_price() const;

    // members 
    std::string bookNo;    
    unsigned units_sold = 0;
    double revenue = 0.0;
};

// add the value of the given Sales_data into this object

Sales_data& Sales_data::combine(const Sales_data &rhs)
{
	units_sold += rhs.units_sold; // add the members of rhs into 
	revenue += rhs.revenue;       // the members of ``this'' object
	return *this; // return the object on which the function was called
}

double Sales_data::avg_price() const{
    if (units_sold){
        return revenue / units_sold;
    }
    else{
        return 0.0;
    }
};

std::istream& read(std::istream& is, Sales_data& item){
    
    double price = 0;
    //cout << "Plase provide a book's isbn, units sold and price seperated by spaces " << "\n";
    is >> item.bookNo >> item.units_sold >> price;
    //cout << "Items provided" << "\n";
    item.revenue = price * item.units_sold;
    return is;
}


std::ostream& print(std::ostream& os, const Sales_data& item)
{
	os << item.isbn() << " " << item.units_sold << " " 
	   << item.revenue << " " << item.avg_price();
	return os;
}

Sales_data::Sales_data(std::istream& input) {read(input, *this);};


int main()
{

    Sales_data default_constructor;
    print(cout, default_constructor) << endl;

    Sales_data my_constructor("my constructor", 69);
    print(cout, my_constructor) << endl;


    return 0;
}
