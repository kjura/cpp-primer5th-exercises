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

int main()
{

    /* 
    
    What, if any, are the constraints on where and how often an
    access specifier may appear inside a class definition? What kinds of members
    should be defined after a ```public``` specifier? What kinds should be ```private```?
    
    */
    

    /* 
    
    How often an acces specifier may appear inside a class definition? --> There are no restrictions for this,
    an access specifier may appear as many time as we want it (zero or more)

    Each access specifier specifies the access level of the succeeding members. The specified access level remains in effect
    until the next access specifier or the end of the class body


    public --> these members should define the interface to the class. Operations that a user can do with a type
    specified by a class should be defined inside it

    private --> this code should not be accessible to a user of a class, we use private to hide the implementation,
    it shouldn't matter to the user how a method was implemented, the user only cares about what can be done with the class.
    
     */





    return 0;
}
