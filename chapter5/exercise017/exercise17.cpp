#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <numeric>

// g++ -std=c++20 -pedantic -Wall -Wextra -Werror -Wshadow -Wsign-conversion -g sandbox.cpp  -o sandbox
// g++ -std=c++20 -pedantic -Wall -Wextra -Wsign-conversion -g sandbox.cpp -o sandbox
// <br />
// PLACEHOLDEREXERCISENAME < input.txt > output.txt
// PLACEHOLDEREXERCISENAME ./exercise5 < input.txt >> output.txt
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::cin;

int main()
{

    // Example input
    // Stil haven't figured it out how to keep a sane logic to input two lines in terminal to seperate variables
    // Damn :(
    vector<int> vector_a =  {0, 1, 1, 2}; 
    vector<int> vector_b = {0, 1, 1, 2, 3, 5, 8};

    unsigned int threshold {};
    if (vector_a.size() >= vector_b.size()){
        threshold = vector_b.size();
    }
    else{
        threshold = vector_a.size();
    }

    for (unsigned int i = 0; i < threshold; ++i){
        if (vector_a.at(i) != vector_b.at(i)){
            cout << "False" << "\n";
            return 0;
        }
    }

    cout << "True" << "\n";

    return 0;
}
