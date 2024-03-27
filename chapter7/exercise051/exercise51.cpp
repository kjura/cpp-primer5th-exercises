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

    string some_str = string({'j', 'o', 'h', 'n'});
    vector<int> some_vec = vector<int>

    cout << some_str << endl;
    for (auto& e : some_vec){
        cout << e << endl;
    }

    // Because when using vector constructor explictly, we need to pass the type
    // We need to be explicit to avoid ambiguity

    // For the string constructor, there is no difference between a "number" and a character for a string
    // So string constructor can convert on fly
    // Would be redundant if we had to pass string type every time we want something to become a string

    return 0;
}
