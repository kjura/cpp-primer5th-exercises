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

    int int_arr[] = {0, 1, 2, 3, 4, 5};
    std::vector<int> ivec(std::begin(int_arr), std::end(int_arr));

    for (auto e : ivec){
        std::cout << e << "\n";
    }

    std::cout << std::endl;

    return 0;
}
