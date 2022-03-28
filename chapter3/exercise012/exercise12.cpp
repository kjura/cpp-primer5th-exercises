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
    
    // LEGAL. Define an empty vector of type <vector<int>>, (vector that will hold vectors)
    //vector<vector<int>> ivec; 

    // ILLEGAL. ivec cannot be a copy of svec, ivec holds <vector<int>> and not a string.
    //vector<string> svec = ivec;

    // LEGAL. Initalize svec with ten strings "null"
    //vector<string> svec(10, "null");

    

    return 0;
}