#include <algorithm>
#include <string>
#include <iostream>
#include <vector>

// g++ -std=c++20 -pedantic -Wall -Wextra -Werror -Wshadow -Wsign-conversion -g PLACEHOLDER.cpp  -o PLACEHOLDER
// g++ -std=c++20 -pedantic -Wall -Wextra -Wsign-conversion -g PLACEHOLDER.cpp -o PLACEHOLDER
// <br />

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main()
{
    

    vector<int> v1; // Zero elements, empty vector, undefined value


    vector<int> v2(10); // 10 elements, value initalized, vector has ints inside so 10 zeros.

    
    vector<int> v3(10, 42); // 10 elements with value 42 of type int


    vector<int> v4{10}; // 1 element with value 10 of type int



    vector<int> v5{10, 42}; // 2 elements with values 10 and 42 of type int



    vector<string> v6{10}; // 10 default initalized elements



    vector<string> v7{10, "hi"}; // 10 elements with "hi" value of type int


    return 0;
}