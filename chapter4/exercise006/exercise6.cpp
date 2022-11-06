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

    int n;
    std::cout << "Please input your integer: ";
    std::cin >> n;

    if (n % 2){
        cout << "Your integer " << n << " is odd\n";
    }
    else{
        cout << "Your integer " << n << " is even\n"; 
    }


    return 0;
}
