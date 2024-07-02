#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <list>
#include <deque>

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
void print_container(T deq) {
    for (const auto e : deq) {
        cout << e << " ";
    }
    cout << "\n";
}

int main()
{

    std::list<int> l {};
    std::deque<int> even {};
    std::deque<int> odd {};

    cout << "Please provide your int input...\n";
    int your_int {  };
    while (cin >> your_int) {
        l.push_back(your_int);
    }

    for (const auto e : l) {
        if (e % 2) {
            odd.push_back(e);
        }
        else {
            even.push_back(e);
        }
    }

    cout << "Even numbers: ";
    print_container(even);
    cout << "Odd numbers: ";
    print_container(odd);

    return 0;
}
