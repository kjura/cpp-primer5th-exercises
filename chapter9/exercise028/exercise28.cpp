#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <forward_list>
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

Exercise 9.28: Write a function that takes a `forward_list<string>` and
two additional `string` arguments. The function should find the first `string`
and insert the second immediately following the first. If the first `string` is
not found, then insert the second `string` at the end of the list.

*/

template <typename T>
void print_container(T& container) 
{
    for (const auto& e : container) {
        cout << e << " ";
    }

    cout << "\n";
};


std::forward_list<string>::iterator get_iter_to_last_element(std::forward_list<string>& flst) {

    auto previous_iter { flst.before_begin() };
    auto current_iter { flst.begin() };

    while (current_iter != flst.end()) {

            previous_iter = current_iter;
            ++current_iter;
        }

    return previous_iter;
}

void takes(std::forward_list<string>& flst, const string& first, const string& second){

    auto previous_iter { flst.before_begin() };
    auto current_iter { flst.begin() };

    while (current_iter != flst.end()) {
            if ( *current_iter == first ) {
                flst.insert_after(current_iter, second);
                return;
            }
            else {
                previous_iter = current_iter;
                ++current_iter;
            }
        }
        
    flst.insert_after(previous_iter, second);

};


int main()
{
    
    std::forward_list<string> flst { "alice", "bob", "victor", "mary", "sam", "carol" };

    cout << "Container before action:" << " ";
    print_container(flst);
    // Action here
    takes(flst, "someone", "unnamed");

    cout << "Container after action:" << " ";
    print_container(flst);
    // cout << "\n";


    auto haha { get_iter_to_last_element(flst) };
    cout << *haha << "\n";

    return 0;
}
