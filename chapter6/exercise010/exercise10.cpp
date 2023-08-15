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

void reset(int* ip){
    *ip = 0;
    ip = 0;
}

void swap(int* p1, int* p2){
    int* address_pt1 = p1;
    int* address_pt2 = p2;

    *p1 = *address_pt2;
    *p2 = *address_pt1;


}

int main()
{

    int n {69}, i {42};
    int* p {&n};
    int* q {&i};

    cout << "Values before swapping\n";
    cout << "n = " << n << "\n";
    cout << "i = " << i << "\n";
    cout << "p = " << p << "\n";
    cout << "q = " << q << "\n";
    cout << "*p = " << *p << "\n";
    cout << "*q = " << *q << "\n";

    cout << "\n\nValues after swapping\n";

    swap(p, q);
    cout << "n = " << n << "\n";
    cout << "i = " << i << "\n";
    cout << "p = " << p << "\n";
    cout << "q = " << q << "\n";
    cout << "*p = " << *p << "\n";
    cout << "*q = " << *q << "\n";


    return 0;
}
