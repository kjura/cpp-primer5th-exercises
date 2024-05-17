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


/* Which is the most appropriate—a vector, a deque, or a list—for the
following program tasks? Explain the rationale for your choice. If there is no reason to
prefer one or another container, explain why not.
 */

int main()
{

    /*     (a) Read a fixed number of words, inserting them in the container alphabetically
            as they are entered. We’ll see in the next chapter that associative containers are better
            suited to this problem.

            List, we need to insert or delete elements in the middle of the container

            (b) Read an unknown number of words. Always insert new words at the back.
            Remove the next value from the front.

            Vector, no size known, use push() to insert new words at the back,
            use pop() to remove them from the front

            (c) Read an unknown number of integers from a file. Sort the numbers and then
            print them to standard output. 

            Vector, no size known, we load everything and then sort, and print
            
    */

    

    return 0;
}
