#include <iostream>
#include <vector>
#include <cmath>
#include <string>

// g++ -std=c++20 -pedantic -Wall -Wextra -Werror -Wshadow -Wsign-conversion -g sandbox.cpp  -o sandbox
// g++ -std=c++20 -pedantic -Wall -Wextra -Wsign-conversion -g sandbox.cpp -o sandbox
// <br />
// PLACEHOLDEREXERCISENAME < input.txt > output.txt
// PLACEHOLDEREXERCISENAME ./exercise5 < input.txt >> output.txt
// Redirection in powershell  Get-Content .\input.txt | .\<YOUREXERCISENAME>>.exe
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::cin;

template<typename T>
void print_container(const T& container) {
    for (const auto &e: container) {
        cout << e << " ";
    }
    cout << "\n";
}

int main()
{

    /*

    vector<string> svec; // declare a vector
    svec.reserve(1024); // reserve storage for 1024 elements
    string word; // declare a string
    while (cin >> word) // loop over input to word, if still valid then
        svec.push_back(word); // push an element to the back of svec
    svec.resize(svec.size()+svec.size()/2); // Resie the container by 1.5 it's size
    // e.g if the vector has 200 elements --> it will have 300 elements after resize

    */

    // Worth mentioning that if the result of resize is a vector with size greater than
    // the capacity, there is a reallocation

    // vector<int> svec {};
    // svec.reserve(2);
    // int word;
    // cout << "Start adding elements..." << "\n";
    // while (cin >> word)
    //     svec.push_back(word);
    // cout << "Current size of svec: " << svec.size() << "\n";
    // svec.resize(svec.size()+svec.size()/2);
    // cout << "Current size of svec after resize: " << svec.size() << "\n";

    // print_container(svec);


    return 0;
}
