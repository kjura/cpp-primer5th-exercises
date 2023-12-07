#include <iostream>
#include <vector>
#include <cmath>
#include <string>

// g++ -std=c++20 -pedantic -Wall -Wextra -Werror -Wshadow -Wsign-conversion -g sandbox.cpp  -o sandbox
// g++ -std=c++20 -pedantic -Wall -Wextra -Wsign-conversion -g sandbox.cpp -o sandbox
// <br />
// PLACEHOLDEREXERCISENAME < input.txt > output.txt
// PLACEHOLDEREXERCISENAME ./exercise5 < input.txt >> output.txt
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::cin;



struct Sales_data {

    string isbn() const {return bookNo;}
    Sales_data& combine(const Sales_data&);
    double get_avg_price() const;
    void print_object(const Sales_data&);
    double get_avg_price();
    // void print_

    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
    double price = 0.0;
    double avg_price = 0.0;

};

double Sales_data::get_avg_price(){
    if (units_sold){
        return revenue / units_sold;
    }
    else{
        return 0.0;
    }
}

Sales_data& Sales_data::combine(const Sales_data& rhs){
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
};

void Sales_data::print_object(const Sales_data& my_instance){
    cout << my_instance.bookNo << " " << my_instance.units_sold << " " << my_instance.revenue << endl;
};

string& my_concat(string& my_word){
    return my_word + " haha";
}

int main()
{

    string napis = "HelloWorld";
    string new_napis = my_concat(napis);



/*     Sales_data total;
    if (cin >> total.bookNo >> total.units_sold >> total.price){
        // Calculate the revenue for the first transaction
        total.revenue = total.units_sold * total.price;

        // Read next transactions
        Sales_data trans;
        while (cin >> trans.bookNo >> trans.units_sold >> trans.price){
            if (total.bookNo == trans.bookNo){
                total.combine(trans);
            }
            else{
                cout << total.bookNo << " " << total.units_sold << " " << total.revenue << " " << (total.revenue / total.units_sold) << "\n";
            }
        }
    } */

    return 0;
}
