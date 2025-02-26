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


/* 

Exercise 9.29: Given that `vec` holds 25 elements, what does
`vec.resize(100)` do? What if we next wrote `vec.resize(10)`?

*/

template <typename T>
void print_container(T& container) 
{
    for (const auto& e : container) {
        cout << e << " ";
    }

    cout << "\n";
};

int main()
{
    cout << "Our container: " << "\n";
    std::vector<int> vec(25, 1);
    print_container(vec);

    // If the current size is less than the requested size
    // elements are added to the back of the container 
    vec.resize(100); // Adds 75 value-initalized elements
    cout << "After resize(100)" << "\n";
    print_container(vec);


    //  If the current size is greater than the requested
    // size, elements are deleted from the back of the container;
    vec.resize(10); // Deletes 90 elements from the back

    // Should have 10 elements in the end, 10 elements with value 1
    cout << "After resize(10)" << "\n";
    print_container(vec);

    if (vec.size() == 10) {
        cout << "All good" << "\n";
    }


    return 0;
}
