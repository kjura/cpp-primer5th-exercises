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

unsigned int some_value(){
    return 1;
}


unsigned int get_value(){
    return 2;
}

int main()
{
    // vector<unsigned int> ivec {1, 2, 3, 42, 5};
    // cout << "Vector before any changes" << "\n";
    // for (const auto& e : ivec){
    //     cout << e << " ";
    // }
    // cout << endl;

    // unsigned index {};
    // cout << "Provide index ...\n";
    // cin >> index;


    /* 
    
    This code will not compile (error: jump to case label) because of the scope of ix variable inside the switch statement
    To make it work, move ix declaration outside of switch (or above cases)
    
     */

    vector<unsigned int> ivec {1, 2, 3, 42, 5};
    unsigned index = some_value();
    unsigned int ix {}; // Here ix is value initalized
    switch (index) {
        case 1:
            ix = get_value();
            ivec[ix] = index;
            break;
        default:
            ix = ivec.size() - 1;
            ivec[ix] = index;
        
}
    // for (const auto& e : ivec){
    //     cout << e << " ";
    // }
    // cout << endl;


    return 0;
}
