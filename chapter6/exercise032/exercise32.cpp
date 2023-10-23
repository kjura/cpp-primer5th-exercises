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

// Legal, reference returns are Lvalues, so it returns an array with an index and
// we can use the return value to initalize a variable
int& get(int* arry, int index) { return arry[index]; } 


int main()
{

    int ia[10]; 
    for (int i = 0; i != 10; ++i) {
        get(ia, i) = i;
    }


    for (auto& e : ia){
        cout << e << "\n";
    }


    return 0;
}
