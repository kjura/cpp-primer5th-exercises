#include <iostream>
#include <vector>
#include <cmath>
#include <string>


// g++ -std=c++20 -pedantic -Wall -Wextra -Werror -Wshadow -Wsign-conversion -g sandbox.cpp  -o sandbox
// g++ -std=c++20 -pedantic -Wall -Wextra -Wsign-conversion -g sandbox.cpp -o sandbox
// <br />
using std::cout;
using std::endl;
using std::vector;
using std::string;



int main(){
    

    // For negative a, the behavior of a << b is undefined.
    // See https://en.cppreference.com/w/cpp/language/operator_arithmetic section: Bitwise shift operators

    /*
    ~`q` << 6 UNDEFINED BEHAVIOUR

    ~`q` << 6 = (~ 00000000 | 00000000 | 00000000 | 01110001) << 6 =

    = 11111111 | 11111111 | 11111111 | 10001110 << 6 = UB Trying to shift the negative value

    */

    return 0;

}
