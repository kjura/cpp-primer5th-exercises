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

void swap(int* p1, int* p2){
    int temp = *p1; // holds value of p1
    *p1 = *p2; // change value of p1 to value of p2, p1 is a new value, temp still holds the old p1
    *p2 = temp; // change value of p2 to the old value of p1 through value in temp

}

int main()
{

    // The key is to rembemer to use a third variable, it serves as a helper to hold the old state of one of
    // the variables

    int n {69}, i {42};
    int* p {&n};
    int* q {&i};

    cout << "\nValues before swapping\n";
    cout << "n = " << n << "\n";
    cout << "i = " << i << "\n";
    // cout << "p = " << p << "\n";
    // cout << "q = " << q << "\n";
    // cout << "*p = " << *p << "\n";
    // cout << "*q = " << *q << "\n";

    cout << "\n\nValues after swapping\n";

    swap(p, q);
    cout << "n = " << n << "\n";
    cout << "i = " << i << "\n";
    // cout << "p = " << p << "\n";
    // cout << "q = " << q << "\n";
    // cout << "*p = " << *p << "\n";
    // cout << "*q = " << *q << "\n\n";


    return 0;
}
