#include <iostream>
#include <vector>
#include <cmath>
 
// g++ -std=c++20 -pedantic -Wall -Wextra -Werror -Wshadow -Wsign-conversion -g sandbox.cpp  -o sandbox
// g++ -std=c++20 -pedantic -Wall -Wextra -Wsign-conversion -g sandbox.cpp -o sandbox
// <br />
using std::cout;
using std::endl;
using std::cin;

//unsigned scores[11];


int main()
{

    // UNDEFINED BEHAVIOUR
    //unsigned scores[11]; // We do not initalize the scores array, Undefined Behaviour 
    //(if we put this line outside of a function, 
    //then it would work out, there would be a default initalization to 11 zeroes)
    unsigned scores[11];
    unsigned grade;
    while (cin >> grade) {

        if (grade <= 100)
        ++scores[grade/10]; // increment the counter for the current cluster
}

    for (auto e : scores){
        cout << e << " ";
    }

    cout << "\n";

    return 0;
}