#include <iostream>
#include <vector>
#include <cmath>
#include <string>

// g++ -std=c++20 -pedantic -Wall -Wextra -Werror -Wshadow -Wsign-conversion -g sandbox.cpp  -o sandbox
// g++ -std=c++20 -pedantic -Wall -Wextra -Wsign-conversion -g sandbox.cpp -o sandbox
// <br />
// PLACEHOLDEREXERCISENAME < input.txt > output.txt
// PLACEHOLDEREXERCISENAME ./exercise5 < input.txt >> output.txt
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::cin;


string make_plural(size_t ctr, const string& word, const string& ending = "s"){
    return (ctr > 1) ? word + ending : word;
}

int main()
{
    const string success = "success";
    const string failure = "failure";

    cout << make_plural(2, success, "es") << "\n";
    cout << make_plural(2, failure) << endl;


    return 0;
}
