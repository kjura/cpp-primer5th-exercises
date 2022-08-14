#include <iostream>
#include <vector>
#include <cmath>
#include <vector>
 
// g++ -std=c++20 -pedantic -Wall -Wextra -Werror -Wshadow -Wsign-conversion -g sandbox.cpp  -o sandbox
// g++ -std=c++20 -pedantic -Wall -Wextra -Wsign-conversion -g sandbox.cpp -o sandbox
// <br />
using std::cout;
using std::endl;
using std::vector;

int main()
{
    int arrayOfTenInts[10];
    cout << "\n";
    for (size_t i = 0; i != 10; i++){
        arrayOfTenInts[i] = i;
        cout << "Index: " << i << " Value: arrayOfTenInts[" << i << "] = " << arrayOfTenInts[i] << "\n";
    }

    int copyArray[10];

    for (size_t i = 0; i != 10; i++){
        copyArray[i] = arrayOfTenInts[i];
        cout << "Copy arrayOfTenInts[" << i << "] = "
             << arrayOfTenInts[i] << " to copyArray[" << i << "] = " << copyArray[i] << "\n"; 
    }

    for (auto e: arrayOfTenInts){
        cout << e << " ";
    }

    cout << "\n";

    for (auto e: copyArray){
        cout << e << " ";
    }

    cout << "\n";


    /*
    Rewriting the above to use vectors (much shorter)
    */


    cout << "\nStart of Vector part ...\n";

    vector<int> vectorOfTenInts;

    for (int i = 0; i != 10; ++i){
        vectorOfTenInts.push_back(i);
    }

    vector<int> copyVector(vectorOfTenInts);

    for (auto e: vectorOfTenInts){
        cout << e << " ";
    }

    cout << "\n";

    for (auto e: copyVector){
        cout << e << " ";
    }

    cout << "\n";
    
    return 0;
}
