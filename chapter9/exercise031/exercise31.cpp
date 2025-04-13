#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <list>
#include <forward_list>

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


/* 

In a nutshell, the code removes even values and duplicates odd ones

std::list<int> -> will not work because operator += (or + is general) is not defined
std::forward_list<int> -> will not work because insert(), erase() and operator+= are not defined

*/

template <typename T>
void print_container(T& container) 
{
    for (const auto& e : container) {
        cout << e << " ";
    }

    cout << "\n";
}

void modify_odd_even(std::list<int>& lst) {

    // {0,1,2,3,4,5,6,7,8,9} ===> 1 1 3 3 5 5 7 7 9 9 

    auto iter = lst.begin(); // call begin, not cbegin because we're changing container_vec
    
    while (iter != lst.end()) {
        if (*iter % 2) { // e.g 5 % 2 = 2 r 1 = 1, so any odd number will turn this if on
            iter = lst.insert(iter, *iter);
            iter++;
            iter++;
        }
        // If even number, go to else 
        else {
            iter = lst.erase(iter);
        }
            
    }
}

void modify_odd_even(std::vector<int>& vec) {
    
    auto iter = vec.begin(); // call begin, not cbegin because we're changing container_vec
    
    while (iter != vec.end()) {
        if (*iter % 2) { // e.g 5 % 2 = 2 r 1 = 1, so any odd number will turn this if on
            iter = vec.insert(iter, *iter);  // duplicate the current element
    
            iter += 2; // advance past this element and the one inserted before it
        } else // If even number, go to else
            iter = vec.erase(iter);          // remove even elements
            // don't advance the iterator; iter denotes the element after the one we erased
    
    }

}


void modify_odd_even(std::forward_list<int>& flst) {

    // We need two iterators to keep track of what's happening in forward list
    auto prev = flst.before_begin();
    auto curr = flst.begin();

    while (curr != flst.end()) {
        if (*curr % 2) { // e.g 5 % 2 = 2 r 1 = 1, so any odd number will turn this if on
            prev = flst.insert_after(prev, *curr);  // duplicate the current element
            ++prev;
            ++curr;
        } else {

            curr = flst.erase_after(prev);
            // No need for ++prev, this would blow out
            // only element removed has the iterator that is invalidated, prev (or previous iterators are fine ) e.g
            // elem1 --> elem2 --> elem3 --> elem4
            // Removing eleme3 changes the value of elem2
            // elem1 --> elem2 ------------> elem4
            // but elem2 can stay as prev, no need to increase it
            // what if increase? Surely there's UB floating around
        
        }
    }

}


int main()
{

    // silly loop to remove even-valued elements and insert a duplicate of odd-valued elements
    
    // {0,1,2,3,4,5,6,7,8,9}


    // std::vector<int> container_vec = {0,1,2,3,4,5,6,7,8,9};
    // std::list<int> container_list = {0,1,2,3,4,5,6,7,8,9};
    // std::forward_list<int> container_forward_list = {2, 2, 2, 2, 2, 3, 2, 3, 1};

    // modify_odd_even(container_vec);
    // modify_odd_even(container_list);
    // modify_odd_even(container_forward_list);

    // print_container(container_vec);
    // print_container(container_list);
    // print_container(container_forward_list);


    std::forward_list<int> kuba { 1, 2, 3 };
    
    auto haha = kuba.end();
    haha = kuba.erase_after(haha);
    // ++haha;
    // cout << *haha << endl;



    return 0;
}
