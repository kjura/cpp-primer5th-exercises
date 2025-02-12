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

};

std::ifstream& read(std::ifstream& input_file, Sales_data& item) {
    double price { 0 };
    input_file >> item.bookNo >> item.units_sold >> price;
    item.revenue = { price * item.units_sold };
    
    return input_file;
}

void print(Sales_data& item) {
    cout << item.bookNo << " " << item.units_sold << " " << item.revenue << "\n";
}

void print_map(std::string_view comment, const std::map<std::string, std::pair<unsigned int, double>>& m)
{
    std::cout << comment << "\n";
    // Iterate using C++17 facilities
    for (const auto& [key, value] : m){
        std::cout << key << ": ";
        std::cout << value.first << " ";
        std::cout << std::fixed << std::setprecision(2) << value.second << "\n";
    }
 
}

int main(int argc, char* argv[])
{
    if (argc <= 1){
        std::cerr << "Name of the file was not passed to main, provide the name when running the program\n";
        return 1;
    }

    std::string name_of_the_file { argv[1] };
    std::ifstream input_file { name_of_the_file };
    if (!input_file) {
        std::cerr << "Error while reading the file \n";
        return 2;
    }

    
    // List of transactions --> ISBN Units_Sold Price
    Sales_data my_object {};
    std::map<std::string, std::pair<unsigned int, double>> m {};

    std::string isbn {};
    unsigned int units {};
    double price {};
    while (input_file >> isbn >> units >> price) {
        std::pair<unsigned int, double> temp_transaction_info = {units, units * price};
        if (m.find(isbn) == m.end()) {
            // not found
            m.insert({isbn, temp_transaction_info});
        } 
        else {
            // found and key already exists, then update the values
            double new_revenue_for_update {units * price};
            m.at(isbn).first += units;
            m.at(isbn).second += new_revenue_for_update;
        }
    }
    
    print_map("Printing transactions", m);


    return 0;
}
