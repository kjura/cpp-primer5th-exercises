#include <algorithm>
#include <string>
#include <iostream>
#include <vector>
#include <cctype>
#include <limits>

// g++ -std=c++20 -pedantic -Wall -Wextra -Werror -Wshadow -Wsign-conversion -g PLACEHOLDER.cpp  -o PLACEHOLDER
// g++ -std=c++20 -pedantic -Wall -Wextra -Wsign-conversion -g PLACEHOLDER.cpp -o PLACEHOLDER
// <br />

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::vector;

// Fibbonaci, the first 21 numbers: 0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610 987 1597 2584 4181 6765

// Line 33 and 45 ---> solution for the exercise

// Altough on my machine, adding two iterators produces an error, the code does not compile

int main(){

    cout << "Welcome to binary search program. Please specify your sequence of numbers (must be sorted!)." 
         << " Seperate numbers using spaces and after you finish press Enter, then Ctrl + D on your keyboard...\n";

    vector<int> container{0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181, 6765};

    int sought = 9;
    
    auto beg = container.begin();
    auto end = container.end();
    auto mid = beg + ((end - beg) / 2); // https://stackoverflow.com/questions/20998982/whats-the-difference-between-mid-begend-2-and-mid-begend-beg-2-in-binary

    while (mid != end && *mid != sought)
    {
        if (sought < *mid){
            end = mid;
        }

        else {
            beg = mid + 1;
        }

        mid = beg + ((end - beg) / 2); // https://stackoverflow.com/questions/20998982/whats-the-difference-between-mid-begend-2-and-mid-begend-beg-2-in-binary

        if (mid == end){
            cout << "The element " << sought << " is not in the container.\n";
            return 0;
        }
    }

    for (auto e : container){
        cout << e << " "; 
    }
    
    cout << "\nSought element is: " << sought << endl;

    return 0;
}