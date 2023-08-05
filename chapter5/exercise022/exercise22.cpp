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

int get_size(){
    int haha {};
    cin >> haha;
    return haha;
}

int main()
{

    // begin:
    //     int sz = get_size();
    //     if (sz <= 0){
    //         goto begin;
    //     }
    //     else {
    //         cout << "Correct!" << endl;
    //     }

    int sz = get_size();
    while (sz <= 0){
        sz = get_size();
    }
    cout << "Correct !" << endl;

    return 0;
}
