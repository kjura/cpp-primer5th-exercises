#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include "Sales_data.h"

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
using std::ostream;

Sales_data::Sales_data(std::istream &is) 
{
	// read will read a transaction from is into this object
	cout << "Called Sales_data(std::istream &is) constructor" << endl;
	read(is, *this);
	
}

double 
Sales_data::avg_price() const {
	if (units_sold)
		return revenue/units_sold;
	else
		return 0;
}

// add the value of the given Sales_data into this object
Sales_data& 
Sales_data::combine(const Sales_data &rhs)
{
	units_sold += rhs.units_sold; // add the members of rhs into 
	revenue += rhs.revenue;       // the members of ``this'' object
	return *this; // return the object on which the function was called
}

Sales_data 
add(const Sales_data &lhs, const Sales_data &rhs)
{
	Sales_data sum = lhs;  // copy data members from lhs into sum
	sum.combine(rhs);      // add data members from rhs into sum
	return sum;
}

// transactions contain ISBN, number of copies sold, and sales price
istream&
read(istream &is, Sales_data &item)
{
	double price = 0;
	cout << "Pass bookNo, units_sold and price" << endl;
	is >> item.bookNo >> item.units_sold >> price;
	item.revenue = price * item.units_sold;
	return is;
}

ostream&
print(ostream &os, const Sales_data &item)
{
	os << item.isbn() << " " << item.units_sold << " " 
	   << item.revenue << " " << item.avg_price();
	return os;
}

int main()
{


	// Doesn't compile, marked explicit for a constructor with one string

    // string null_book = "9-999-999999-9";
	// Sales_data item("123-456-789", 10, 69.00);
	// item.combine(null_book); 


	/* 
	
	Benefits: you cannot hide a conversion, any reviewer will not have to focus if one can implicitly convert
	to a class type, any conversion would have to be forced by casting or an explicit construction, less chance
	to introduce bugs


	Drawbacks: There would be a need to construct and hold every object we would like to temporarily operate on 
	when performing an operation on the Sales_data object
	
	 */

	return 0;
}
