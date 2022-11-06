#include <iostream>
#include <vector>
#include <cmath>
 
// g++ -std=c++20 -pedantic -Wall -Wextra -Werror -Wshadow -Wsign-conversion -g sandbox.cpp  -o sandbox
// g++ -std=c++20 -pedantic -Wall -Wextra -Wsign-conversion -g sandbox.cpp -o sandbox
// <br />
using std::cout;
using std::endl;

int main()
{

    // * vec.begin() Order of evaluation: member selector ----> function call --> dereference
    // ( * ( (vec.begin) () ) )

    // * vec.begin() + 1 Order of evaluation: member selector ----> function call --> dereference --> unary plus
    // ( ( * ( (vec.begin) () ) ) + 1 )

    return 0;
}
