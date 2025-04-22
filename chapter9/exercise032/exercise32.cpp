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

void modify_odd_even(std::vector<int>& vec) {
    
    auto iter = vec.begin(); // call begin, not cbegin because we're changing container_vec
    
    while (iter != vec.end()) {
        if (*iter % 2) { // e.g 5 % 2 = 2 r 1 = 1, so any odd number will turn this if on


            /* 
            
            UNDEFINED BEHAVIOUR!: there is now way to get 
            the order of evaluation of both left and right arguments
            as the function uses both simultaneously it can either
            
            take iter before post-increment or before

            vec.insert(iter, *iter) vs vec.insert(iter + 1, * (iter + 1))

            */

        
            iter = vec.insert(iter, *iter++);
            
            // iter = vec.insert(iter, *iter); ==> This one is correct
    
            iter += 2; // advance past this element and the one inserted before it
        } else // If even number, go to else
            iter = vec.erase(iter);          // remove even elements
            // don't advance the iterator; iter denotes the element after the one we erased
    
    }

}

template<typename T>
void print_container(T& container) {
    for (auto e : container) {
        cout << e << " ";
    }
}

int main()
{

    std::vector<int> vec { 4, 1, 1, 1, 6, 6, 9, 10, 10, 5, 2, 2, 3, 3, 3 };

    modify_odd_even(vec);
    print_container(vec);
    cout << "\n";

    return 0;
}
