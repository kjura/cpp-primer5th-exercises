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



    Loop and increment ix and do something inside the for block
    A bug, as soon as the loop terminates, ix is destroyed
    and if (ix != sz) tries to compare a non existiting variable
    sz must also be initalized above

    Correction:
    int sz {something};
    int ix {0};
    for (; ix != sz; ++ix)  { . . . }

        if (ix != sz)


    (b)

    Loop increments ix and does something in curly brackets,
    ix is not initalized, sz also

    int ix;
    for (ix != sz; ++ix) { . . . }

    Correction:
    int ix {0}; (or omit and null statement in for)
    int sz {something};
    for (ix != sz; ++ix) { . . . }


    (c)

    Loop has two components that increment ix and sz
    but sz is not initalized in for

    for (int ix = 0; ix != sz; ++ix, ++ sz)  { . . . }

    Correction:
    for (int ix = 0, sz = someint; ix != sz; ++ix, ++ sz)  { . . . }
    If someint is bigger than ix, this is an endless loop

    */

    return 0;
}
