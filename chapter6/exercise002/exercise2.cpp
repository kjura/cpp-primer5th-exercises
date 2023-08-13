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

    Error, returning a string for a function that needs to return an int
    
    int f() {
        string s;
        // ...
        return s;
    }

    Correction: change T=int f() {...} to T=str f() {...}
    
     */


    /* 
    
    (b)

    f2(int i) { / ... / }

    Error, no return type,

    Correction put a return type (void or something else)
    
    */


    /* 

    (c)
    
    int calc(int v1, int v1) { / ... / }

    Error, no two parameters can have the same name

    Correction, change the name of one of the parameters
    
    */


   /* 

   (d)
   
   double square(double x) return x * x;
   
   Error, a statement block is needed for the function body {}

   Correction, add curly braces around return x * x;


    */


    return 0;
}
