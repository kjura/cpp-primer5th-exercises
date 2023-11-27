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

int my_add(int a, int b){
    return a + b;
};

int my_subtract(int a, int b){
    return a - b;
};

int my_multiply(int a, int b){
    return a * b;
};

int my_divide(int a, int b){
    if (!b) {
        cout << "Division by zero. Aborting and returning -1...\n";
        return -1;
    }
    else{
        return a / b; // this is int, full int only if a / b == int with no remainder
    }
};

int main()
{

/*  my_add(60, 69);

    my_subtract(69, 60);

    my_multiply(69, 69);

    my_divide(69, 0); */

    vector<int(*)(int, int)> my_vector = {my_add, my_subtract, my_multiply, my_divide};

    return 0;
}
