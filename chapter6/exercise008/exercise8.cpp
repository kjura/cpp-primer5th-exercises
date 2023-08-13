#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include "Chapter6.h"

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

unsigned int count_sequence(){
    static unsigned int seq {0};
    return seq++;
}

int my_square(int x){
    return x * x;
}

void get_word(){
    string some_local_varialbe_in_word = "Hello!";
    cout << some_local_varialbe_in_word << "\n";
}

int my_counter(){
    static int counter {0};
    ++counter;
    return counter;
}

double get_abs_value(double x){
    if (x >= 0){
        return x;
    }
    else {
        return (-1 * x);
    }
}

int fact(int n){

    int result {1};
    for (; n > 0; --n){
        result *= n;
    }

    return result;
}


int main()
{

    get_word();


    return 0;
}
