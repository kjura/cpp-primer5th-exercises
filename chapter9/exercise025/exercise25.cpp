#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <list>

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

Exercise 9.25: In the program on page 349 that erased a range of
elements, what happens if `elem1` and `elem2` are equal? What if `elem2` or
both `elem1` and `elem2` are the off-the-end iterator?

Code:

elem1 = slist.erase(elem1, elem2); // after the call elem1 == elem2

*/

int main()
{

    // what happens if `elem1` and `elem2` are equal?
    // cppref -> erasing an empty range is a no-op. No element is removed

    std::list<int> no_op_list { 2, 4, 6, 8};
    no_op_list.erase(no_op_list.begin(), no_op_list.begin());

    cout << "No_op_list" << "\n";
    for (auto e : no_op_list){
        cout << e << " ";
    }
    cout << "\n";
    cout << "###########################################################" << "\n";

    // What if `elem2` is off-the-end?
    // It will remove elements from elem1 until the end of a container

    std::list<int> last_off_the_end { 42, 44, 101, 314, 150, 456, 35 };
    auto beg_last_off_the_end { last_off_the_end.begin() };
    std::advance(beg_last_off_the_end, 3);
    last_off_the_end.erase(beg_last_off_the_end, last_off_the_end.end()); // leaves out { 42, 44, 101 }, returns an updated end

    cout << "last_off_the_end" << "\n";
    for (auto e : last_off_the_end){
        cout << e << " ";
    }
    cout << "\n";
    cout << "###########################################################" << "\n";


    // What if  both `elem1` and `elem2` are the off-the-end iterator?
    // Erasing an empty range is a no-op
    // If last == end() prior to removal, then the updated end() iterator is returned.

    std::list<int> both_off_the_end { 42, 44, 101, 314, 150, 456, 35 };
    both_off_the_end.erase(both_off_the_end.end(), both_off_the_end.end()); // NO-OP, [first, last) last is returned, in this case the end() iterator

    cout << "both_off_the_end" << "\n";
    for (auto e : both_off_the_end){
        cout << e << " ";
    }
    cout << "\n";
    cout << "###########################################################" << "\n";

    return 0;
}
