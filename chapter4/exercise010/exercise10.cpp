#include <iostream>
#include <vector>
#include <cmath>
 
// g++ -std=c++20 -pedantic -Wall -Wextra -Werror -Wshadow -Wsign-conversion -g sandbox.cpp  -o sandbox
// g++ -std=c++20 -pedantic -Wall -Wextra -Wsign-conversion -g sandbox.cpp -o sandbox
// <br />
using std::cout;
using std::endl;

int main()
{
    int i = 0;
    cout << "Please enter your integers. If you provide 42 then the loop will break ...\n";
    cout << "Enter your numbers here ... ";
    while (i != 42 && std::cin >> i){


    }

    cout << "Value read equal to 42. Terminating the program..." << "\n";


    return 0;
}
