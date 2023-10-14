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

int main()
{

    /* 
    
    Q: When should reference parameters be references to const?

    A: When we do not want to change the state of a variable, leaving it as read-only
    
    Q: What happens if we make a parameter a plain reference when it could be a
    reference to const?

    A: It could misleadingly indicate that we want to change the parameter (but we
    only make read-only operation) and we cannot pass a literal as a parameter,
    we first need to create a variable that will later have a reference bound to it 
    
    */




    return 0;
}
