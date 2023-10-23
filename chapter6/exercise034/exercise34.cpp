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

/*  

Equivalent terminating condition --> still the same answer
BUT -- If negative numbers then we have an INFINITE LOOP (val - 1) will never go down to zero but to minus infinity

int factorial (int val){
    if (val != 0){
        return factorial(val - 1) * val;
    }
    return 1;
}
*/


int factorial (int val){
    if (val != 0){
        return factorial(val - 1) * val;
    }
    return 1;
}

int main()
{

    // The same output as with if (val > 1)
    // ASSUMING positive ints
    cout << factorial(5) << endl;


    return 0;
}
