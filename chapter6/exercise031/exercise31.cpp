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
    
    When is it valid to return a reference? --> As long as we don't return a reference to a local object (or pointer)
    
    */


   /* 
   
   A reference to const? --> It's valid (above also applies) as long as we do not assign to the result of the call to 
   a func that returns const&
   
    */


    return 0;
}
