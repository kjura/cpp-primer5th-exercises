#include <iostream>
#include <vector>
#include <cmath>
#include <map>
#include <utility>
#include <iomanip>
#include <string>
#include <fstream>

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
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;

    Sales_data& combine(const Sales_data& rhs);


};

Sales_data& Sales_data::combine(const Sales_data& rhs) {
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;

    return *this;
}

std::ifstream& read(std::ifstream& in, Sales_data& item) {
    double price {0};

    in >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;

    return in;

}

void print(const Sales_data& item) {
    cout << item.bookNo << " " << item.units_sold << " " << item.revenue << " " << (item.revenue / item.units_sold) << "\n";

}



int main(int argc, char* argv[])
{

    if (argc <= 2){
        std::cerr << "Two arguments required: input file name and output file name, terminating ...\n";
        return 1;
    }

    std::string file_name_input { argv[1] };
    std::string file_name_output { argv[2] };
    std::ifstream transactions_file { file_name_input };
    if (!transactions_file) {
        std::cerr << "Error while reading the input file \n";
        return 2;
    }
    else {
        if (!output)file) {
            std::cerr << "Error while reading the input file \n";
            return 3;
        }
    }

    Sales_data total; // variable to hold data for the next transaction
    // Read the first transaction
    if (read(transactions_file, total)){
    //     // Read next transactions
        Sales_data trans;
        while (read(transactions_file, trans)){
            // If we're still processing the same book, update revenue
            if (trans.bookNo == total.bookNo){
                total.combine(trans);
            }
            else {
                // Print results for the previous book before processing the next one
                print(total);
                // Reset total revenue and total unit sold to prepare variables to hold data for the next book
                total = trans;
            }
        }
        
        print(total);
    }


    return 0;
}
