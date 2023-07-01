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
    vector<int> ivec1 = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int>::size_type cnt1 = ivec1.size();
    // assign values from size... 1 to the elements in ivec
    for(vector<int>::size_type ix = 0; ix != ivec1.size(); ++ix, --cnt1){
            ivec1[ix] = cnt1;
            std::cout << ivec1[ix] << " ";
    }

    std::cout << std::endl;
    
    vector<int> ivec2 = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int>::size_type cnt2 = ivec2.size();
    // assign values from size... 1 to the elements in ivec
    for(vector<int>::size_type ix = 0; ix != ivec2.size(); ix++, cnt2--){
            ivec2[ix] = cnt2;
            std::cout << ivec2[ix] << " ";
    }

    std::cout << std::endl;


    /*
    It doesnt matter for a for loop to have pre or post increment/decrement

    The results are the same.

    We used prefix because we don't need the unincremented value, there's no need
    to store the original value (that would come from postfix increment/decrement)
    */

    return 0;
}
