#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <forward_list>
#include <list>
#include <iterator>

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
Exercise 9.26: Using the following definition of `ia`, copy `ia` into a `vector`
and into a `list`. Use the single-iterator form of `erase` to remove the
elements with odd values from your `list` and the even values from your
`vector`.

```cpp
int ia[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89 };
```
*/


template <typename T> // this is the template parameter declaration defining T as a type template parameter
void print_container(T& container) // this is the function template definition for max<T>
{
    for (auto &e : container) {
        cout << e << " ";
    }

    cout << "\n";
};

int main()
{

    int ia[] { 0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89 };
    vector<int> vec(std::begin(ia), std::end(ia));
    std::list<int> lst(std::begin(ia), std::end(ia));

    cout << "Start: array ";
    print_container(ia);

    cout << "Start: vector ";
    print_container(vec);

    cout << "Start: list ";
    print_container(lst);

    // eg. 4 % 2 == 0 means even, 4 % 2 != 0 means odd

    auto begin_iter_vec { vec.begin() };
    auto begin_iter_lst { lst.begin() }; 

    // Keep only odd values, so remove even
    while (begin_iter_vec != vec.end()) {
        if ( !(*begin_iter_vec % 2) ) {
            begin_iter_vec = vec.erase(begin_iter_vec);
        }
        else {
            ++begin_iter_vec;
        }
    }

    // Keep only even values so remove odd
    while (begin_iter_lst != lst.end()) {
        if ( *begin_iter_lst % 2 ) {
            begin_iter_lst = lst.erase(begin_iter_lst);
        }
        else {
            ++begin_iter_lst;
        }
    }

    cout << "Vector after removing even values" << "\n";
    for (auto e : vec) {
        cout << e << " ";
    }
    cout << "\n";

    cout << "List after removing odd values" << "\n";
    for (auto e : lst) {
        cout << e << " ";
    }
    cout << "\n";

    return 0;
}
