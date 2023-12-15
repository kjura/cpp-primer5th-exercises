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

    Sales_data();
    Sales_data(std::istream& input);

    // other members as before
    std::string isbn() const { return bookNo; }
    Sales_data& combine(const Sales_data&);
    double avg_price() const;
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

Sales_data::Sales_data(std::istream& input) {cout << "istream constructor called" << "\n"; read(input, *this);};


int main()
{

    // REMEMBER: CANNOT INITALIZE A CONSTRUCTOR INSIDE IF STATEMENT CONDITION
	
    Sales_data total(std::cin);
    if (std::cin)  {  // read the first transaction
		Sales_data trans(std::cin);    // variable to hold data for the next transaction
		while(std::cin) {      // read the remaining transactions
			if (total.isbn() == trans.isbn())   // check the isbns
				total.combine(trans);  // update the running total
			else {
				print(cout, total) << endl;  // print the results
				total = trans;               // process the next book
			}

            read(std::cin, trans);
		}
		print(cout, total) << endl;          // print the last transaction
	} else {                                 // there was no input
		std::cerr << "No data?!" << endl;         // notify the user
	} 

	return 0;
}
