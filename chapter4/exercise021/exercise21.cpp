#include <iostream>
#include <vector>
#include <cmath>
#include <string>

// g++ -std=c++20 -pedantic -Wall -Wextra -Werror -Wshadow -Wsign-conversion -g sandbox.cpp  -o sandbox
// g++ -std=c++20 -pedantic -Wall -Wextra -Wsign-conversion -g sandbox.cpp -o sandbox
// <br />
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{

    vector<int> data = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (auto &e : data){
        // can be also e % 2, if  e % 2 is different from 0, then this is converted to true,
        // the result is the first expression
        e = e % 2 ? e*2 : e;  

    }

    for (auto &e : data){
        cout << e << " ";
    }

    cout << endl;


    return 0;
}
