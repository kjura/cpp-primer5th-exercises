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
    
    string str_input;
    vector<string> container;

    cout << "Write your sequence of strings. Press Ctrl + D to finish" << endl;
    while (cin >> str_input)
    {
        container.push_back(str_input);
    }
    
    cout << "The content of your vector is below:" << "\n";
    for (auto e : container){
        cout << e << endl; 
    }

    return 0;
}