#include "Sales_item.h"
#include <iostream>
// g++ -std=c++11 -pedantic -Wall -Wextra -Werror -Wshadow -Wsign-conversion -g sandbox.cpp  -o sandbox
// g++ -std=c++11 -pedantic -Wall -Wextra -Wsign-conversion -g sandbox.cpp -o sandbox

// To use file redirection: After compilation just write in your terminal (Tested on Linux Ubuntu Distro)
// ./exercise20 <infile >outfile

int main (){

    Sales_item book; // book contains ISB, number of copies sold and sales price

    while (std::cin >> book){
        std::cout << book << "\n";
    }
    

    return 0;
}