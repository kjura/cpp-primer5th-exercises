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

    
    string seq_str;

    vector<string> container;

    cout << "Write a sequence of words which will be written to a vector. After you finish, press Ctrl+D" << endl;
    while (cin >> seq_str){
        
            container.push_back(seq_str);
        }


    unsigned int counter = 0;
    for (auto &e : container){
        
        ++counter;

        for (auto &i : e){
            i = toupper(i);
        }

        cout << e << " ";

        if (counter % 8 == 0){
            cout << endl;
        }

        
    }

    cout << endl;
    

    return 0;
}