#include <iostream>
#include <vector>
#include <cmath>
 
// g++ -std=c++20 -pedantic -Wall -Wextra -Werror -Wshadow -Wsign-conversion -g sandbox.cpp  -o sandbox
// g++ -std=c++20 -pedantic -Wall -Wextra -Wsign-conversion -g sandbox.cpp -o sandbox
// <br />
using std::cout;
using std::endl;
using std::vector;

int main()
{

    vector<int> myVec{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arry[10] = {};

    for (decltype(myVec.size()) i=0; i != myVec.size(); ++i){

        arry[i] = myVec[i];

    }

    for (auto e : arry){
        cout << e << "\n";
    }


    return 0;
}
