#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <list>
#include <algorithm>

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
using std::list;

int main()
{

    list<int> l { 1, 9, 8, 4 };
    vector<int> v { 1, 9, 8, 4};

    if (l.size() == v.size()) {

        cout << "Same size of l and v \n";

        auto l_beg { l.cbegin() };
        auto v_beg { v.cbegin() };

        for (; l_beg != l.cend() && v_beg != v.cend(); ++l_beg, ++v_beg){
            if ( *l_beg != *v_beg ){
                cout << "l != v\n";
                return 0;
            }
            
        }

        cout << "Same size of l and v and all the elements are qual so l == v\n";
    }

    else {
        cout << "TODO" << endl;
    }


    return 0;
}
