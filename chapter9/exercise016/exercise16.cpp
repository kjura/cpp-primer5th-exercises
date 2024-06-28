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

    list<int> l {  1, 1, 40 };
    vector<int> v { 1, 1, 41 };

    auto size_of_l { l.size() };
    auto size_of_v { v.size() };

    auto l_beg { l.cbegin() };
    auto v_beg { v.cbegin() };

    if (size_of_l == size_of_v) {

        for (; l_beg != l.cend() && v_beg != v.cend(); ++l_beg, ++v_beg){
            if ( *l_beg != *v_beg ){
                cout << "l != v\n";
                return 0;
            }
            
        }

        cout << "l == v\n";
        return 0;
    }

    else {
            
            for (; l_beg != l.cend() && v_beg != v.cend(); ++l_beg, ++v_beg){
                if ( *l_beg > *v_beg ){
                    cout << "l > v\n";
                    return 0;
                }
                else if ( *l_beg < *v_beg ) {
                    cout << "v > l\n";
                    return 0;
                }
    
            }

            if (size_of_l > size_of_v) {
                cout << "l > v\n";
            }
            else {
                cout << "v > l\n";
            }

            return 0;

        }


    return 0;
}
