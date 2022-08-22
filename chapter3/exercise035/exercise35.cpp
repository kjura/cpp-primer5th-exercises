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
    
    int array[10] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};

        for (auto e : array){
        cout << e << " ";
    }

    cout << "\n";


    int *beg = std::begin(array);
    int *end = std::end(array);

    for (; beg != end; ++beg){
        *beg = 0;
    }


    for (auto e : array){
        cout << e << " ";
    }

    cout << "\n";

    return 0;
}
