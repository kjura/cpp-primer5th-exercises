#include <iostream>
#include <vector>
#include <cmath>
#include <string>

// g++ -std=c++20 -pedantic -Wall -Wextra -Werror -Wshadow -Wsign-conversion -g sandbox.cpp  -o sandbox
// g++ -std=c++20 -pedantic -Wall -Wextra -Wsign-conversion -g sandbox.cpp -o sandbox
// <br />
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{

    cout << "Size of bool: " << sizeof(bool) << endl;
    cout << "Size of char: " << sizeof(char) << endl;
    cout << "Size of wchar_t: " << sizeof(wchar_t) << endl;
    cout << "Size of char16_t: " << sizeof(char16_t) << endl;
    cout << "Size of char32_t: " << sizeof(char32_t) << endl;
    cout << "Size of short: " << sizeof(short) << endl;
    cout << "Size of int: " << sizeof(int) << endl;
    cout << "Size of long: " << sizeof(long) << endl;
    cout << "Size of long long: " << sizeof(long long) << endl;
    cout << "Size of float: " << sizeof(float) << endl;
    cout << "Size of double: " << sizeof(double) << endl;
    cout << "Size of long double: " << sizeof(long double) << endl;

    /*

    OUTPUT:

    Size of bool: 1
    Size of char: 1
    Size of wchar_t: 4
    Size of char16_t: 2
    Size of char32_t: 4
    Size of short: 2
    Size of int: 4
    Size of long: 8
    Size of long long: 8
    Size of float: 4
    Size of double: 8
    Size of long double: 16
    */


    return 0;
}
