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
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

int main()
{

    Sales_data total; // variable to hold data for the next transaction
    double price;
    // Read the first transaction
    if (cin >> total.bookNo >> total.units_sold >> price){
        // Calculate the revenue for the first transaction
        total.revenue = total.units_sold * price;

        // Read next transactions
        Sales_data trans;
        while (cin >> trans.bookNo >> trans.units_sold >> price){
            // If we're still processing the same book, update revenue
            if (trans.bookNo == total.bookNo){
                total.units_sold += trans.units_sold;
                total.revenue += trans.units_sold * price;
            }
            else {
                // Print results for the previous book before processing the next one
                cout << total.bookNo << " " << total.units_sold << " " << total.revenue << " " << (total.revenue / total.units_sold) << "\n";
                // Reste total revenue and total unit sold to prepare variables to hold data for the next book
                total.revenue = trans.units_sold * price;
                total.units_sold = trans.units_sold;
                total.bookNo = trans.bookNo;
            }
        }
        cout << total.bookNo << " " << total.units_sold << " " << total.revenue << " " << (total.revenue / total.units_sold) << "\n";
    }


    return 0;
}
