#include <algorithm>
#include <string>
#include <iostream>
#include <vector>
#include <cctype>

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

    vector<int> v1(10, 42); // This is the way! Short, clear and did I mention that it does not require to write a lot of boilerplate?
    vector<int> v2{42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
    vector<int> v3;


    for (decltype(v3.size()) indx = 0; indx != 10; ++indx) {
        v3.push_back(42);
    } 

    for (auto &e : v1){
        cout << e << " ";
    }

    cout << endl;

    for (auto &e : v2){
        cout << e << " ";
    }

    cout << endl;

    for (auto &e : v3){
        cout << e << " ";
    }

    cout << endl;


    return 0;
}