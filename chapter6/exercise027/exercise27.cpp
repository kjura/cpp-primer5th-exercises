#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <initializer_list>

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

// Remember to include <initializer_list> header
void sum(std::initializer_list<int> lst){
    int sum{};
    for (auto e : lst){
        sum += e;
    }
    cout << "Sum of the elements in the list is: " << sum << "\n";
}

int main()
{

    sum({1, 2, 3, 4, 5});


    return 0;
}
