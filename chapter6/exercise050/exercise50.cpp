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

void f();
void f(int);
void f(int, int);
void f(double, double = 3.14);

int main()
{

    //  (a) f(2.56, 42)

    // Viable func --> f(int, int) AND f(double, double = 3.14);


    // (b) f(42)

    // (c) f(42, 0)

    // (d) f(2.56, 3.14)


    return 0;
}
