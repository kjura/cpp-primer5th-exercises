#include <iostream>
#include <vector>
#include <cmath>
#include <string>
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


    std::forward_list<int> flst { 12, 13, 15, 16, 18, 19, 20 };

    cout << "flst before removal" << "\n";
    print_container(flst);

    auto previous_iter { flst.before_begin() };
    auto current_iter { flst.begin() };

    while (current_iter != flst.end()){

        // If this if evaluates, we have an odd number in a container
        // becasue then *current_iter % 2 is NOT zero
        if (*current_iter % 2) {

            // First, delete this element denoted by current_iter
            current_iter = flst.erase_after(previous_iter);
        }

        // If not, we met an even number,
        // 1. Update previous iterator
        // 2. Advance current_iter forward
        // This way previous iter is always just one place away from current_iter
        else {
            previous_iter = current_iter;
            ++current_iter;
        }
    };

    cout << "flst after removal" << "\n";
    print_container(flst);


    return 0;
}
