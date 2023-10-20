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

int factorial (int val){
    if (val > 1){
        return factorial(val - 1) * val;
        // what if factorial( (val--) - 1) * val instead?
        // Ten val inside factorial is different than the val we use outside of a function call
        // For example factorial(((val=4)--) - 1) * val <====> factorial(4 - 1) * 3 instead of factorial(4 - 1) * 4
    }
    return 1;
}

int main()
{

    /* factorial((val--) - 1) * val
    
    factorial(4) --> factorial(3) * 3 --> factorial(2) * 2 --> factorial(1) * 1 --> 1

    3 * 2 * 1 * 1 = 6

    The program would contain a bug and the results would not be true for any number


    NOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO!!!!!!!!!!


    The program is corrupted since the very start, this is Undefined Behaviour (order of evaluation for multiplication "*")

     */


    return 0;
}
