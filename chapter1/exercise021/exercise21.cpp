#include <iostream>
#include "Sales_item.h"

// g++ -std=c++11 -pedantic -Wall -Wextra -Wsign-conversion -g exercise21.cpp -o exercise21
// Tested on Linux (Ubuntu): ./exercise21 <infile >outfile

int main (){

    Sales_item book_1, book_2;
    
    //std::cout << "Please enter two sale items \n";
    std::cin >> book_1 >> book_2;


    if (book_1.isbn() == book_2.isbn()){

        std::cout << "ISBN, items sold, total revenue and average price per item: " << book_1 + book_2 << std::endl;
        return 0;

    }

    else{
        std::cout << "ISBN of two objects must be the same" << std::endl;
        return 0;
    }

    return 0;
}