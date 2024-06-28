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



/* 

Exercise 9.16: Repeat the previous program, but compare elements in a list<int>
to a vector<int>.

 */


/* 

{1, 9, 8, 4} and {1, 9, 8}

{1, 9, 8, 4} and {1, 9, 8, 4}

{1, 9, 8, 5, 7} and {1, 9, 3, 4, 6, 4, 3}


 */

int main()
{

    list<int> l { 1, 1, 1, 1, 50, 60};
    vector<int> v { 1, 1, 42, 1, 1, 1, 7};

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

        if (size_of_l > size_of_v) {
            
            for (; l_beg != l.cend() && v_beg != v.cend(); ++l_beg, ++v_beg){
                if ( *l_beg > *v_beg ){
                    cout << "l > v\n";
                    return 0;
                }
                else if ( *l_beg < *v_beg ) {
                    cout << "l < v\n";
                    return 0;
                }
    
            }

            cout << "l > v\n";
            return 0;

        }
        else {

            for (; l_beg != l.cend() && v_beg != v.cend(); ++l_beg, ++v_beg){
                if ( *l_beg > *v_beg ){
                    cout << "l > v\n";
                    return 0;
                }
                else if ( *l_beg < *v_beg ) {
                    cout << "l < v\n";
                    return 0;
                }
    
            }

            cout << "v > l\n";
            return 0;
            
        }


    }

    return 0;
}
