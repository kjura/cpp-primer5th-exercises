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

    constexpr int size = 5;
    int ia[size] = {1,2,3,4,5};
    
    /*
    The following loop goes (5 times) from the pointer that points to the first element of array ia
    until it reaches a pointer before off-the-end pointer. It also goes from ix=0 to ix=4 (5 times)

    Every iteration it increments ix and ptr by 1
    */
    for (int *ptr = ia, ix = 0; ix != size && ptr != ia+size; ++ix, ++ptr){
         /* ... SOMETHING   */ 
         }


    return 0;
}
