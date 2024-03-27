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

    // 1. What is a static class member?

    // It's a member that is not bound to class instances.

    // 2. What are the advantages of static members?

    // They allow to share state between different instances of a class
    // They reduce redundancy, they are a global object shared between instances

    // 3. How do they differ from ordinary members?
    // They can be used as default arguments inside a member function
    // They can have incomplete type
    // They can have the same type as the flass type of which it is a member



    return 0;
}
