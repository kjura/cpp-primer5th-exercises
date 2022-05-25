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

    int input_int;
    std::vector<int> container;

    std::cout << "Please enter your integers to be held by container vector<int>. Press Ctrl + D to stop the input: ";
    while (cin >> input_int){
        container.push_back(input_int);
    } 

    if (container.empty()){
        cout << "Container cannot be empty. You did not specify any element to save it inside the container, aborting ...\n";
        return 0;
    }

    if (container.size() == 1){
        cout << "Container has only one element. Total in the container is " << container[0] << endl;
        return 0;
    }


    // Sum each pair of adjacent elements

    /*int sum_adj = 0;
    for (decltype(container.size()) indx = 0; indx != (container.size() - 1); ++indx){

        //cout << container[indx] << "+" << container[indx + 1] << "= " << container[indx] + container[indx + 1] << "\n";
        sum_adj += container[indx] + container[indx + 1];

    }

    cout << "\nSum of adjacent elements is: " << sum_adj << "\n"; */

    // Symmetric sum, first-last, second-second two last etc.

    int sum_symmetric = 0;

    

    for (decltype(container.size()) indx = 0; indx != container.size() / 2 && indx != container.size(); ++indx){

        

        sum_symmetric += container[indx] + container[container.size() - indx - 1];

        cout << container[indx] << "+" << container[container.size() - indx - 1] << "= " 
        << container[indx] + container[container.size() - indx - 1] << "\n";


    }

    cout << "\n";
    cout << "Symmetric sum: " << sum_symmetric << "\n";
    cout << "Midpoint of the container " << container.size() / 2 << "\n";

    return 0;
}