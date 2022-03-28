#include <algorithm>
#include <string>
#include <iostream>

// g++ -std=c++20 -pedantic -Wall -Wextra -Werror -Wshadow -Wsign-conversion -g PLACEHOLDER.cpp  -o PLACEHOLDER
// g++ -std=c++20 -pedantic -Wall -Wextra -Wsign-conversion -g PLACEHOLDER.cpp -o PLACEHOLDER
// <br />

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
    
    string line;

    cout << "Please enter your string and hit ENTER" << endl;
    getline(cin, line);

    //cout << line << endl;
    cout << endl;

    if (!line.empty()){

        for (auto &c : line){

            if (ispunct(c)){
                ;
            }

            else{
                cout << c;
            }


    } 

    }

    
    cout << endl;

    return 0;
}