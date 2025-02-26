#include <iostream>
#include <vector>
#include <cmath>
#include <string>

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

Exercise 9.30: What, if any, restrictions does using the version of `resize`
that takes a single argument place on the element type?

*/

int main()
{

    /* 
    
     If the container holds elements of
    a class type and resize adds elements, we must supply an initializer OR the element
    type must have a default constructor.
    
    From cppreference

    std::sequential_container<T,Allocator>

    Named requirements:
    T must meet the requirements of MoveInsertable and DefaultInsertable in order to use void resize( size_type count );

    */


    return 0;
}
