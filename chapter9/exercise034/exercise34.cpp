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

template<typename T>
void print(const vector<T>& vec) {
    for (const auto& e : vec) {
        cout << e << " ";
    }   
    cout << "\n";
}

int main()
{

    // Note to myself: -Werror=misleading-indentation catches that
    // vector<int> vi { 2, 1, 4, 5, 6, 7, 8, 9, 10, 44, 13 };

    // We expect -> 1 1 3 3 5 5 7 7 
    vector<int> vi { 1, 3, 5, 7 };
    /*
    auto iter = vi.begin();
    // Duplicate odd numbers
    while (iter != vi.end())
        if (*iter % 2)
            iter = vi.insert(iter, *iter); // indentation bug, you are not advancing your iterator by two to check new element
        ++iter; // This is wrong
    */

    auto iter { vi.begin() };
    while (iter != vi.end()) {
        if (*iter % 2) {
            iter = vi.insert(iter, *iter);
            iter += 2; // Twice, to move 1) skip over the element we added 2) The one we just processed
        }
        else {
            ++iter; // Regular increment if we haven't found an odd number, important to have in else
        }
         
    }

    print(vi);

    return 0;
}
