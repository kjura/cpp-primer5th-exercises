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

    int a, b, c, d;
    a = 10; b = 8; c = 6; d=4;

    if (a > b && b > c && c > d){
        cout << a << " > " << b << " > " << c << " > " << d << "\n";
    } 


    return 0;
}
