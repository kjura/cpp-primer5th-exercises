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
    /*

    Two things can happen:

    1.First element is not printed, if the vector does not have negative values 
    then we have UB --> dereferencing one-past-the-end iterator
    2. If there is a negative value, stopping a the negative value, but first element is not printed
    */

    /*

    std::vector<int> v = {1, 2, 3, 69}; // or with some negative values
    
    auto pbeg = v.begin();
    // print elements up to the first negative value
    while (pbeg != v.end() && *pbeg >= 0){
         cout << *++pbeg << endl; // print the current value and advance pbeg
    }

    */

    return 0;
}
