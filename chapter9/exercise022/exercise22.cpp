#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <type_traits>

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
void print(T container, bool flag = true){
    if (flag) {
        for (auto e : container) {
        cout << e << "\n";
    }
    }
    else {
        for (auto e : container) {
        cout << e << " ";
    }

    cout << "\n";
    }
}

/*  

Assuming iv is a vector of ints, what is wrong with the following
program? How might you correct the problem(s)?

vector<int>::iterator iter = iv.begin(),
mid = iv.begin() + iv.size()/2; -----------> No mid update, since we put new elements, midpoint is calculated wrongly
while (iter != mid){
    if (*iter == some_val) {
        iv.insert(iter, 2 * some_val); ---------------> We must be careful to avoid UB, iterator invalidation
        Also, this must be captured to a variable to be able to advance from the new point of view (after insertion)
    }
        ---------------> No iterator increment, eternal loop
}

*/

int main()
{

    int some_val { 4 };
    std::vector<int> iv { 2, 4, 6, 8, 10, 12 };
    cout << "Vector before the loop" << "\n";
    print(iv);
    vector<int>::iterator iter = iv.begin();
    auto mid { iv.begin() + (std::ssize(iv) / 2) };
    while (iter != mid){
        if (*iter == some_val) {
            // There's a difference between iter = iv.insert(iter, 2 * some_val); and iv.insert(iter, 2 * some_val); (no assignment)
            // For the latter, it explodes and does not print anything after the while loop, because you go over the new mid
            // (and there was iterator invalidation)
            iter = iv.insert(iter, 2 * some_val); // Insert 2 * some_val BEFORE iter, return the iterator pointing to the inserted value
            ++iter; // Advance the iterator pointing to the inserted by one to skip it and move forward
            mid = iv.begin() + (std::ssize(iv) / 2); // We need to update mid because the container size has changed when we have updated the container

        }
        ++iter; // Again, advance the iterator because we want read another element
    }

    cout << "Vector after the loop" << "\n";
    print(iv);

    return 0;
}
