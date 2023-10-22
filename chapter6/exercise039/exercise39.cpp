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

int* reset(int* ptr){
    *ptr = 0;
    return ptr;
}
double* reset(double* ptr){
    *ptr = 0.0;
    return ptr;
}

int main()
{

/*  LEGAL, second declaration is a redeclaration (top-level const has no effect on the objects that can be passed to the fun)
    int calc(int, int);
    int calc(const int, const int);

*/


/* ILLEGAL, two functions differ only in terms of their return types

    int get();
    double get();

 */


/* LEGAL, parameters differ and types are different, compiler can recognise between the calls

    int* reset(int*);
    double* reset(double*);

 */

    double db = 42.56;
    double* reset_db = reset(&db);
    
    cout << *reset_db << endl;


    return 0;
}
