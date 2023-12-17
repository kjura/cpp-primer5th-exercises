#include <vector>
#include <cmath>
#include <string>
#include <iostream>

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



class Sales_data {
    friend std::istream& read(std::istream& is, Sales_data& item);
    public:
        Sales_data() = default;
        Sales_data(const string& s, unsigned n, double p):
                    bookNo(s), units_sold(n), revenue(p*n) { }
        Sales_data(const string& s) : bookNo(s) { }
        Sales_data(std::istream&);
        string isbn() const { return bookNo; }
    private:
        double avg_price() const;
        string bookNo;
        unsigned units_sold = 0;
        double revenue = 0.0;

        
                 
};

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
    cout << "Plase provide a book's isbn, units sold and price seperated by spaces " << "\n";
    is >> item.bookNo >> item.units_sold >> price;
    cout << "Items provided" << "\n";
    item.revenue = price * item.units_sold;
    return is;
}


int main(){

    Sales_data haha("Something");


    /* 
    
    Friends:

    pros --> They provide a degree of freedom in the interface design options. (quoted by cpp iso page),
    they allow to include external functions that should also be a part of the implementation

    cons: --> Overused they hide/weaken data encapsulation
    
     */


    return 0;
}
