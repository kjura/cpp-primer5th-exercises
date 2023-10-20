#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <algorithm>

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

void recur(const vector<int>& vec, vector<int>::size_type n){

    
    if (n > 1){
    cout << vec[n - 1] << " ";
    return recur(vec, (n - 1)); // do not pass one-past-end index, first call n - 1 = size - 1 so no invalidation

    }
    else {
        cout << vec[n - 1] << "\n";
        return;
    }

}


int main()
{
    cout << "Please provide integers seperated by space to push to the vector ...\n";
    vector<int> container {};
    int input {};
    while (cin >> input){
        container.push_back(input);
    }
    std::reverse(container.begin(), container.end());
    recur(container, container.size()); // It works but from other side (reversing the vector)
    // Possible solution of course, reverse the vector


    return 0;
}
