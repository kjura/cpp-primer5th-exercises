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


int fact(int n){
    int result {1};
    for (; n > 0; --n){
        result *= n;
    }

    return result;
}

int main()
{


    cout << "0! is equal to = " << fact(0) << "\n";
    cout << "1! is equal to = " << fact(1) << "\n";
    cout << "2! is equal to = " << fact(2) << "\n";
    cout << "3! is equal to = " << fact(3) << "\n";
    cout << "4! is equal to = " << fact(4) << "\n";
    cout << "5! is equal to = " << fact(5) << "\n";
    cout << "6! is equal to = " << fact(6) << "\n";
    cout << "7! is equal to = " << fact(7) << "\n";
    cout << "8! is equal to = " << fact(8) << "\n";
    cout << "9! is equal to = " << fact(9) << "\n";
    cout << "10! is equal to = " << fact(10) << "\n";
    

    return 0;
}
