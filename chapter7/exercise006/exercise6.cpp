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


    string isbn() const {return bookNo;}
    Sales_data& combine(const Sales_data&);
    double get_avg_price();

    // Three functions from the exercise
    void print_object();
    Sales_data& add(Sales_data& lhs, Sales_data& rhs);
    std::istream& read(std::istream& is, Sales_data& item);


    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
    double price = 0.0;
    double avg_price = 0.0;

};

void Sales_data::print_object(){
    cout << bookNo << " " << units_sold << " " << revenue << " " << get_avg_price();
};

Sales_data add(const Sales_data& lhs, const Sales_data& rhs){
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}

std::istream& read(std::istream& is, Sales_data& item){
    
    is >> item.bookNo >> item.units_sold >> item.price;
    item.revenue = item.price * item.units_sold;
    return is;
}


double Sales_data::get_avg_price(){
    if (units_sold){
        return revenue / units_sold;
    }
    else{
        return 0.0;
    }
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
