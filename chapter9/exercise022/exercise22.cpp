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

Initially: 

1. No exit condition, this loops eternally
2. iv.size() / 2 can throw a warning implicit conversion takes place e.g 5 / 2 -> 2
3. In iv.insert(iter, 2 * some_val) we do not account for a side effect of iterator invalidation,
namely, we do not update the iter since it points to the old value
(but now a new element has been put before iter)

vector<int>::iterator iter = iv.begin(),
mid = iv.begin() + iv.size()/2;
while (iter != mid){
    if (*iter == some_val) {
        iv.insert(iter, 2 * some_val);
    }
}

*/



int main()
{



    int some_val { 4 };
    std::vector<int> iv { 2, 4, 6, 8, 10, 12 };
    vector<int>::iterator iter = iv.begin(), mid = iv.begin() + std::ssize(iv) / 2; // pointing to iv[3]
    while (iter != mid){
        if (*iter == some_val) {
            iv.insert(iter, 2 * some_val);
        }
        iter++;
    }

    // print(iv);

    return 0;
}
