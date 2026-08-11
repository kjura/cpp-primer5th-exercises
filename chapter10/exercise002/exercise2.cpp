#include <iostream>
#include <algorithm>
#include <string>
#include <list>

// g++ -std=c++20 -pedantic -Wall -Wextra -Werror -Wshadow -Wsign-conversion -g sandbox.cpp  -o sandbox
// g++ -std=c++20 -pedantic -Wall -Wextra -Wsign-conversion -g sandbox.cpp -o sandbox
// <br />
// PLACEHOLDEREXERCISENAME < input.txt > output.txt
// PLACEHOLDEREXERCISENAME ./exercise5 < input.txt >> output.txt
// Redirection in powershell  Get-Content .\input.txt | .\<YOUREXERCISENAME>>.exe
using std::cout;
using std::list;
using std::string;

template <typename InputIt, typename SeekValue>
typename std::iterator_traits<InputIt>::difference_type count_sv(InputIt first, InputIt last, const SeekValue& sv) {
    
    return std::count(first, last, sv);
    
}


int main()
{

    const list<string> v { "Alice", "Bob", "Cynthia", "Derek", "Derek", "Derek", "Derek", "Eve", "Frank" };
    const string value_to_be_found { "Derek" };
    cout << "Count of " << value_to_be_found << " in the container: " << count_sv(v.cbegin(), v.cend(), value_to_be_found) << "\n";

    return 0;
}
