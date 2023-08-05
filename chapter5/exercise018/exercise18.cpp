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

int main()
{


    /* 
    
    (a) 
    
    Do-while loop, asks for two numbers and then prints the sum
    There should be curly braces after do to wrap around the statements inside do
    
    */

    do { // curly braces
        int v1, v2;
        cout << "Please enter two numbers to sum:" ;
        if (cin >> v1 >> v2)
            cout << "Sum is: " << v1 + v2 << endl;
    } // curly braces
    while (cin);


    /* 
    
    (b)

    do-while loop that does something
    You cannot initalize a variable inside condition
    You could potentilly use ival in do before the variable would be defined

     */

     do {
    // . . .
    } while (int ival = get_response()); // cannot define a variable inside condition in do-while

    // correction, move definition outside of condition

    int ival;
    do {
        /* ... */
    }
    while (/* ... */);

    /* 
    
    (c)

    Variables used inside condition must be defined outisde the body of do-while statement

     */

    int ival;
    do {
        int ival = get_response();
    } while (ival);


    return 0;
}
