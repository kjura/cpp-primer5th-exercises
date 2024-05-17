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

using deque_int = std::deque<int>;
using list_deque_int = std::list<deque_int>;


void print_deque(deque_int d) {

    for (const auto& e : d) {
        cout << e << " ";
    }

    cout << "\n";

}

void print_list(list_deque_int l) {

    for (const auto& e : l) {
        print_deque(e);
    }
}

int main()
{

    // Define a `list` that holds elements that are `deques` that hold `ints`.

    deque_int d1 = {42, 24, 69, 96};
    deque_int d2 = {1, 9, 8, 4};
    deque_int d3 = {2000, 2002, 2004, 2006};
    deque_int d4 = {1901, 1939, 1914, 1900};

    list_deque_int l = {d1, d2, d3, d4};


    print_list(l);


    return 0;
}
