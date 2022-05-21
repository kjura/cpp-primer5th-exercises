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


    vector<int> my_vector{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (auto it = my_vector.begin(); it != my_vector.end(); ++it){

        *it *= 2;

    }

    for (auto e : my_vector){
        cout << e << " ";
    }

    cout << "\n";


    return 0;
}