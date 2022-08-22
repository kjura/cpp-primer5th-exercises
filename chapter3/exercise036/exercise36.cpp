#include <iostream>
#include <vector>
#include <cmath>
 
// g++ -std=c++20 -pedantic -Wall -Wextra -Werror -Wshadow -Wsign-conversion -g sandbox.cpp  -o sandbox
// g++ -std=c++20 -pedantic -Wall -Wextra -Wsign-conversion -g sandbox.cpp -o sandbox
// <br />
using std::cout;
using std::endl;
using std::vector;
using std::begin;
using std::end;

int main()
{
    // First, element-wise comparison of arr1 and arr2
    // Two things then, check if length is the same, and then check equality element-wise

    int arrOne[] = {1, 2, 3, 4, 5};
    int arrTwo[] = {5, 6, 7, 8, 9};

    //int *begArrOne = begin(arrOne);
    //int *begArrTwo = begin(arrTwo);

    unsigned lengthArrOneCounter = 0;
    unsigned lengthArrTwoCounter = 0;

    // First calculate length

    for (auto pbeg = begin(arrOne); pbeg != end(arrOne); ++pbeg){
        ++lengthArrOneCounter;
    }

    for (auto pbeg = begin(arrTwo); pbeg != end(arrTwo); ++pbeg){
        ++lengthArrTwoCounter;
    }


    if (lengthArrOneCounter == lengthArrTwoCounter){

        cout << "Both arrays have the same length. Continuing for elemet-wise check ...\n";

    }

    else{
        cout << "Arrays are not equal. Exiting ...\n";
    }


    // vector<int> vec1 = {1, 2, 3, 4, 5};
    //vector<int> vec2 = {5, 6, 7, 8, 9};


    return 0;
}
