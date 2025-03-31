#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <list>
#include <forward_list>

// g++ -std=c++20 -pedantic -Wall -Wextra -Werror -Wshadow -Wsign-conversion -g sandbox.cpp  -o sandbox
// g++ -std=c++20 -pedantic -Wall -Wextra -Wsign-conversion -g sandbox.cpp -o sandbox
// <br />
// PLACEHOLDEREXERCISENAME < input.txt > output.txt
// PLACEHOLDEREXERCISENAME ./exercise5 < input.txt >> output.txt
// Redirection in powershell  Get-Content .\input.txt | .\<YOUREXERCISENAME>>.exe
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::cin;


/* 

std::list<int> -> will not work because operator += (or + is general) is not defined
std::forward_list<int> -> will not work because insert(), erase() and operator+= are not defined

*/

int main()
{

    // silly loop to remove even-valued elements and insert a duplicate of odd-valued elements
    
    std::forward_list<int> vi = {0,1,2,3,4,5,6,7,8,9};
    auto iter = vi.begin(); // call begin, not cbegin because we're changing vi
    
    while (iter != vi.end()) {
        if (*iter % 2) { // e.g 5 % 2 = 2 r 1 = 1, so any odd number will turn this if on
            iter = vi.insert(iter, *iter);  // duplicate the current element
    
            iter += 2; // advance past this element and the one inserted before it
        } else // If even number, go to else
            iter = vi.erase(iter);          // remove even elements
            // don't advance the iterator; iter denotes the element after the one we erased
    
    }



    return 0;
}
