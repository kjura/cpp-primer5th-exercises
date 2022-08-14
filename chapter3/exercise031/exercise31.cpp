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
    int arrayOfTenInts[10];
    cout << "\n";
    for (size_t i = 0; i != 10; i++){
        arrayOfTenInts[i] = i;
        cout << "Index: " << i << " Value: arrayOfTenInts[" << i << "] = " << arrayOfTenInts[i] << "\n";
    }

    /*for (auto e : arrayOfTenInts){
        cout << e << " ";
    }*/


    cout << endl;

    return 0;
}
