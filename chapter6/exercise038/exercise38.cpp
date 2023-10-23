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

int odd[4] = {1, 3, 5, 7};
int even[4] = {2, 4, 6, 8};

int (&arrPtr(int i)) [4]{
    return (i % 2) ? odd : even; // return first pointer to odd if the remainder is zero, else return ptr to even
    // Do notice that we changed &odd to odd and &even to even (ampersand sign)
    // This is because we return a non-const reference and NOT a pointer to an array
}


int main()
{

    int (&something) [4] = arrPtr(666);
    cout << even[0] << endl;
    something[0] = 42;
    cout << even[0] << endl;


    return 0;
}
