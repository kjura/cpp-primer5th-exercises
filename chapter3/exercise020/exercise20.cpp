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

    int input_int;
    std::vector<int> container;

    std::cout << "Please enter your integers to be held by container vector<int>. Press Ctrl + D to stop the input: ";
    while (cin >> input_int){
        container.push_back(input_int);
    }

    // Sum each pair of adjacent elements

    int sum_adj = 0;
    for (decltype(container.size()) indx = 0; indx != (container.size() - 1); ++indx){

        //cout << container[indx] << "+" << container[indx + 1] << "= " << container[indx] + container[indx + 1] << "\n";
        sum_adj += container[indx] + container[indx + 1];

    }

    cout << "\nSum of adjacent elements is: " << sum_adj << "\n";

    // Symmetric sum, first-last, second-second two last etc.

    // Maybe use modulo trick to not get out of bounds?
    // I mean, but this assumes symmetry and 'infinite' grid such as was on cellular automata
    // need to investigate more

    return 0;
}