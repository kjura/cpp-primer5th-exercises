#include <iostream>
#include "Sales_item.h"

// g++ -std=c++11 -pedantic -Wall -Wextra -Wsign-conversion -g exercise22.cpp -o exercise22
// Tested on Linux (Ubuntu): ./exercise22 <infile >outfile

int main (){

    Sales_item accumulator;
    std::cin >> accumulator;
    

    Sales_item book;

    while (std::cin >> book){

        accumulator += book;

    }


    std::cout << "The sum of all the transactions that were read: " << accumulator << std::endl;

    return 0;
}