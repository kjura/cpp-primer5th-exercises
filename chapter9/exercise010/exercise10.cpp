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

int main()
{

    // vector<int> v1;
    // const vector<int> v2;
    // auto it1 = v1.begin(), it2 = v2.begin(); // btw, inconsisten deduction for auto, seperate different types
    // auto it3 = v1.cbegin(), it4 = v2.cbegin();

    /* 
    
    it1 -> std::vector<int>::iterator

    it2 -> std::vector<int>::const_iterator

    it3 -> std::vector<int>::const_iterator

    it4 -> std::vector<int>::const_iterator
    
     */


    return 0;
}
