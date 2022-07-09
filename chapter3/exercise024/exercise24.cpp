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


    int input_int;
    std::vector<int> container;

    std::cout << "Please enter your integers to be held by container vector<int>. Press Ctrl + D to stop the input: \n";
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

    cout << "\n";
    auto it_start = container.cbegin();
    auto it_end = container.cend();
    int sum_adjacent = 0;

    // Sum of adjacent elements of std::vector<int> using iterators


    for (;(it_start + 1) != it_end && it_start != it_end; ++it_start){

        cout << *it_start << " + " << *(it_start + 1) << " = " << *it_start + *(it_start + 1) << "\n";
        sum_adjacent += *it_start + *(it_start + 1);

    }

    cout << "Sum of adjacent elements: " << sum_adjacent << "\n";

    // Symmetric sum (sum of the first and last, followed by the sum of the second and second-to-last etc.)

    cout << "\n";
    int sum_symmetric = 0;
    it_start = container.cbegin();
    it_end = container.cend();
    auto mid_container = it_start + (it_end - it_start) / 2;

     if (container.size() % 2 != 0){
        sum_symmetric += *mid_container;
    }  

    // Idea for below loop, we need a stiff begin iterator that will be added to 
    // magic iterator arithmetic that it responsible for going from the end of the vector to the beginning
    //         cout << *(v1.cbegin() + ((end - beg) - 1)) << endl;
    // GREAT!

    for (; it_start !=  mid_container && it_start != it_end; it_start++){

        cout << *it_start << " + " << *(it_start + 1) << " = " << *it_start + *(it_start + 1) << "\n";
        
        sum_symmetric += *it_start + *( (it_end - it_start) + ); 

    }

    




    return 0;
}