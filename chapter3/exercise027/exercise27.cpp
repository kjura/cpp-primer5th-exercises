#include <algorithm>
#include <string>
#include <iostream>
#include <vector>
#include <cctype>
#include <limits>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::vector;

// g++ -std=c++20 -pedantic -Wall -Wextra -Werror -Wshadow -Wsign-conversion -g PLACEHOLDER.cpp  -o PLACEHOLDER
// g++ -std=c++20 -pedantic -Wall -Wextra -Wsign-conversion -g PLACEHOLDER.cpp -o PLACEHOLDER
// <br />

int main(){

    

    /*

    // (a) Illegal (compilation error with pedantic), not a constant expression, 
    // error: ISO C++ forbids variable length array ‘ia’

    unsigned buf_size = 1024;
    int ia[buf_size];

    */ 

    /*

    // (b) Legal

    int ia[4 * 7 - 14];

    */ 


    /*

    // (c) 
    // Illegal, txt_size() is not constexpr (if it is, then it's ok)
    int ia[txt_size()];

    */ 
    

    /*

    // (d) 
    // Illegal, there is no space for a null character, should be st[12]
    
    char st[11]= "fundamental"

    */ 

    cout << "I love c++!" << endl;

    return 0;
}