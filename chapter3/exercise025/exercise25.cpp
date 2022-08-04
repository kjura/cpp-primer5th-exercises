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

    // Test on this input 42 65 95 100 39 67 95 76 88 76 83 92 76 93
    /* Change the below so it works with iterators
    vector<unsigned> scores(11, 0);
    unsigned grade;
    while (cin >> grade){

        if (grade <= 100){
            ++scores[grade/10]; // <==> auto ind = grade/10; scores[ind] = scores[ind] + 1;
        }
        
    }
    
    for (auto number : scores){
        cout << number << " ";
    }
    cout << "\n"; */

    vector<unsigned> scores(11, 0);
    unsigned grade;
    cout << "Please state your grades input, seperated by spaces, once you're done, hit Enter and then Ctrl+D:\n";

        while (cin >> grade){

        if (grade <= 100){

            *(scores.begin() + (grade / 10)) += 1; // could also be just incremented by ++, y'know ...
        }
        
    }
    cout << "\n\nYour grade clusters are below:\n";
    for (auto number : scores){
        cout << number << " ";
    }
    cout << "\n"; 

    return 0;
}