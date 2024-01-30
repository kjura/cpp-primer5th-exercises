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

/* // Undefined behaviour
// But fortunately G++ catches this with -Werror=reorder and -Werror=uninitalized
struct X {
    X (int i, int j): base(i), rem(base % j) { }
    int rem, base; // rem is initalized first in the constructor initializer
    // so base % j is used to to initalize rem first, but at this point base is undefined!!!
    // when base has been initalized first, then rem will be a valid initalization
}; */

struct X {
    X (int i, int j): base(i), rem(base % j) { }
    int base, rem;
};

int main()
{

    X x = X(42, 69);
    //cout << "Undefined behaviour " << x.base << " " << x.rem << "\n";
    cout << "It works!! " << x.base << " " << x.rem << "\n";


    return 0;
}
