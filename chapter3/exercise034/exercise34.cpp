#include <iostream>
#include <vector>
#include <cmath>
 
// g++ -std=c++20 -pedantic -Wall -Wextra -Werror -Wshadow -Wsign-conversion -g sandbox.cpp  -o sandbox
// g++ -std=c++20 -pedantic -Wall -Wextra -Wsign-conversion -g sandbox.cpp -o sandbox
// <br />
using std::cout;
using std::endl;

int main()
{

    int arr[] = {0, 1, 2, 3, 4};

    int *p1 = arr;
    int *p2 = &arr[3];

    // The following code moves p1 to p2
    p1 += p2 - p1; 
    /* This code is illegal if (p2 - p1) is a value such that p1 + this value goes out of the scope of the array
    then, if we dereferenced this pointer we would have undefined behaviour */

    cout << *p1 << "\n";

    return 0;
}
