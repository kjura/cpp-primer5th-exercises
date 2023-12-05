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
    double avg_price() const;

    std::string bookNo;
    unsigned units_sold = 5;
    double revenue = 0.0;

};

struct Date
{
    int year {};
    int month {};
    int day {};

    void incrementDay()
    {
        ++day;
    }

    void print() const {
        cout << year << "." << month << "." << day << "\n";
        //cout << this->year << "." << this->month << "." << this->day << "\n";
    }
};

int main()
{
    const Date today { 2020, 10, 14 }; // const

    // today.day += 1;        // compile error: can't modify member of const object
    // today.incrementDay();  // compile error: can't call member function that modifies member of const object
    today.print(); // Date::print(&today)
    today.incrementDay();
    today.print();
    [[maybe_unused]] int a = 69;
    [[maybe_unused]] int const* a_ptr  = &a;



    return 0;
}
