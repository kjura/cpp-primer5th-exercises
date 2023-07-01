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

    double hello = 42.0;
    const string str = "Mario";
    char c = 'a';
    int i = 5;
    double d = 6.0;
    const string *ps = &str;
    char *pc = &c;
    void *pv = &hello;


    // Casts

    pv = (void*)ps; // cast pointer to const string to void pointer -->  static_cast<void*>(const_cast<string*>(ps))
    i = int(*pc); // cast dereferenced pc ('a' char stored in c) to an int --> static_cast<int>(*pc)
    pv = &d;  // 
    pc = (char*) pv; // reinterpret_cast<char*>(pv)

    cout << "pv = (void*)ps: " << pv << endl;
    cout << "i = int(*pc): " << i << endl;
    cout << "pv = &d: " << pv << endl;
    cout << "pc = (char*) pv: " << pc << endl;


    return 0;
}
