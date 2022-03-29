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
    
    int int_input;
    vector<int> container;

    cout << "Write your sequence of ints" << endl;
    while (cin >> int_input)
    {
        container.push_back(int_input);
    }
    
    cout << "The content of your vector is below:" << "\n";
    for (auto e : container){
        cout << e << endl; 
    }

    return 0;
}