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


int main(){

    vector<string> text{"this", "is", "a", "paragraph", "", "a", "new", "line"};

    for (auto it = text.begin(); it != text.end() && !it->empty(); ++it){

        for (auto &e : *it){
            e = toupper(e);
        }
    }

    for (auto &e : text){

        if (e.empty()){
            e = "<empty>";
        }

        cout << e << " ";
    }

    cout << "\n";
    return 0;
}