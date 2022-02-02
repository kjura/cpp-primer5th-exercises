#include <iostream>
#include <string>

// Program for section 2.6.2 "Using the Sales_data Class"

// g++ -std=c++11 -pedantic -Wall -Wextra -Werror -Wshadow -Wsign-conversion -g sandbox.cpp  -o sandbox
// g++ -std=c++11 -pedantic -Wall -Wextra -Wsign-conversion -g sandbox.cpp -o sandbox
// <br />

//example input from the book

// Input 1: 0-201-78345-X 3 20.00
// Input 2: 0-201-78345-X 2 25.00
// Output: 0-201-78345-X 5 110 22

struct Sales_data {
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};


int main()
{
    
    Sales_data book1, book2;

    double price = 0;
    
    // Read the first book
    std::cin >> book1.bookNo >> book1.units_sold >> price;
    book1.revenue = price * book1.units_sold;

    // Read the second book

    std::cin >> book2.bookNo >> book2.units_sold >> price;
    book2.revenue = price * book2.units_sold;

    
    if (book1.bookNo == book2.bookNo){

        unsigned totalCount = book1.units_sold + book2.units_sold;
        double totalRevenue = book1.revenue + book2.revenue;

        std::cout << book1.bookNo << " " << totalCount << " " << totalRevenue << " ";

        if (totalCount != 0){
            // Compute the average price per book
            std::cout << totalRevenue / totalCount << std::endl;

        }

        else {
            std::cout << "No sales" << std::endl;
        }

        return 0;
    }

    else{

        std::cerr << "Data must refer to the same ISBN" << std::endl;

        return -1;
    }
 
 
    return 0;
}
