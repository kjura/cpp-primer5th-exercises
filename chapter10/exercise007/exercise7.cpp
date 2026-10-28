#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <algorithm>
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


template <typename T>
void print_collection(const T& c) {

    for (const auto& e : c) {
        cout << e << " ";
    }

    cout << "\n";
}

int main()
{

    cout << "Example (a)\n";
    vector<int> vec;
    cout << "Initial capacity of a vector: " << vec.capacity() << "\n";
    std::list<int> lst;
    int i;
    cout << "Type in your elements that will be added to the list:\n";
    while (cin >> i) {
        lst.push_back(i);
    }

    cout << "Reserve storage for a vector, make sure it can hold all the elements from the list:\n";
    vec.reserve(lst.size());
    cout << "Capacity of a vector now: " << vec.capacity() << "\n";
    std::copy(lst.cbegin(), lst.cend(), std::back_inserter(vec));

    cout << "Print collections after the copy operation\n";
    print_collection(lst);
    print_collection(vec);

    cout << "\n\n";
    cout << "Example (b)\n";

    cout << "Remember about back_inserter when using write algorithms, vec_two is initially empty:\n";
    vector<int> vec_two;
    vec.reserve(10); // reserve is covered in § 9.4 (p. 356)
    std::fill_n(std::back_inserter(vec_two), 10, 0);
    print_collection(vec_two);

    return 0;
}
