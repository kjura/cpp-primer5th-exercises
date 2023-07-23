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

    /* Case labels must be integral constant expressions, no multiple conditions allowed */
    // Also oddCnt != oddcnt (small c vs capital C)
    // Let's correct it with fallthrough

    unsigned evenCnt = 0, oddCnt = 0;
    cout << "Provide your number ... \n";
    int digit {};
    cin >> digit;
    //int digit = get_num() % 10;
    switch (digit) {
        case 1:
            [[fallthrough]];
        case 3:
        case 5:
        case 7:
        case 9:
            oddCnt++;
            break;
        case 2:
            [[fallthrough]];
        case 4:
        case 6:
        case 8:
        case 10:
            evenCnt++;
            break;
    }

    cout << "evenCnt = " << evenCnt << "\n";
    cout << "oddCnt = " << oddCnt << "\n";

    return 0;
}
