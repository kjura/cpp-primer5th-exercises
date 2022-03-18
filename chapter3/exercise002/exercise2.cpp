#include <algorithm>
#include <string>
#include <iostream>

// g++ -std=c++20 -pedantic -Wall -Wextra -Werror -Wshadow -Wsign-conversion -g exercise2.cpp  -o exercise2
// g++ -std=c++20 -pedantic -Wall -Wextra -Wsign-conversion -g exercise2.cpp -o exercise2
// <br />

//using std::string;
//using std::cout;
//using std::cin;
//using std::endl;

int main()
{
    
    
    std::string line1, line2;

    //std::cout << "Please provide a text ";
    /*while (getline(std::cin, line1)){
        std::cout << line1 << std::endl;
    } */

    std::cout << "Please provide a text ";
    while (std::cin >> line2) {
        std::cout << line2 << std::endl;
    }




    return 0;
}