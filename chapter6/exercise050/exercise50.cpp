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
    // This call is ambigous because of paramter types and
    // necessary conversions (from double to int and from int to double)


    // (b) f(42) --> f(int);
    // Viable func --> f(int)
    // Best mach --> f(int)

    // (c) f(42, 0)
    // Viable functions --> f(int, int) and f(double, double = 3.14)
    // best match --> f(int, int)

    // (d) f(2.56, 3.14)
    // Viable functions --> f(int, int) and f(double, double = 3.14)
    // Best match -> f(double, double = 3.14)


    return 0;
}
