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

void get_larger(int number, int* ptr){ // fundamental types are cheap, pass by value
    if (number > *ptr){
        cout << "the number is greater than the value to which the pointer points to.\n";
    }
    else {
        if (*ptr > number) {
            cout << "the value to which the pointer points to is greater than the number.\n";
        }
        else {
            cout << "The number and the value to which the pointer points to are equal.\n";
        }
    }
}

int main()
{

    cout << "Please provide two integers seperated by a space ...\n";
    int a{};
    int b{};
    cin >> a >> b;
    get_larger(a, &b); // fundamental types are cheap, pass by value


    return 0;
}
