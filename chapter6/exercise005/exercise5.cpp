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

// Watch out for floating point numbers around zero!! E.g negative zero values
double get_abs_value(double x){
    if (x >= 0){
        return x;
    }
    else {
        return (-1 * x);
    }
}

int main()
{

    cout << "Absolute value of 3.44 is " << get_abs_value(3.44) << "\n";
    cout << "Absolute value of -5 is " << get_abs_value(-5) << "\n";
    cout << "Absolute value of 6 is " << get_abs_value(6) << "\n";
    cout << "Absolute value of 0 is " << get_abs_value(0) << "\n";
    cout << "Absolute value of -0.0047 is " << get_abs_value(-0.0047) << "\n";
    cout << "Absolute value of 750 is " << get_abs_value(750) << "\n";
    cout << "Absolute value of -666 is " << get_abs_value(-666) << "\n";
    cout << "Absolute value of -0.000000000000042 is " << get_abs_value(-0.000000000000042) << "\n";


    return 0;
}
