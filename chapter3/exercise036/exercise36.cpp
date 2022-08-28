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

/*

Tested for following arrays:

    int arrOne[] = {1, 2, 3} vs int arrTwo[] = {1, 2, 3} EQUAL
    int arrOne[] = {1, 2} vs int arrTwo[] = {1, 2, 3} NOT EQUAL
    int arrOne[] = {1, 2, 3} vs int arrTwo[] = {1, 2} NOT EQUAL
    int arrOne[] = {5, 1, 3} vs int arrTwo[] = {1, 2, 3} NOT EQUAL
    int arrOne[] = {1, 2, 3} vs int arrTwo[] = {5, 1, 3} NOT EQUAL
    int arrOne[] = {1, 2, 3} vs int arrTwo[] = {1, 2, 8} NOT EQUAL
    int arrOne[] = {1, 9, 3} vs int arrTwo[] = {1, 5, 3} NOT EQUAL
*/
int main()
{
    // First, element-wise comparison of arr1 and arr2
    // Two things then, check if length is the same, and then check equality element-wise

    int arrOne[] = {1, 2, 3, 4, 5, 6, 7};
    int arrTwo[] = {1};
    vector<int> vec1 = {1, 2};
    vector<int> vec2 = {1, 2, 3};

    unsigned lengthArrOneCounter = 0;
    unsigned lengthArrTwoCounter = 0;

    // First calculate length

    for (auto pbeg = begin(arrOne); pbeg != end(arrOne); ++pbeg){
        ++lengthArrOneCounter;
    }

    for (auto pbeg = begin(arrTwo); pbeg != end(arrTwo); ++pbeg){
        ++lengthArrTwoCounter;
    }

    // Compare length and set flag to true if they are not equal

    bool notEqual = false;
    if (lengthArrOneCounter != lengthArrTwoCounter){
        notEqual = true;
    }

    // If they are equal, compare element-wise
    else {

        int *begArrOne = begin(arrOne);
        int *begArrTwo = begin(arrTwo);

        while (begArrOne != end(arrOne) && begArrTwo != end(arrTwo)){

            // If a pair of elements are not equal (same index for both arrays), then mark as not equal
            if (*begArrOne != *begArrTwo){
                notEqual = true;
                break; 
            }

            ++begArrOne;
            ++begArrTwo;

        }

    }

    if (notEqual){
        cout << "Arrays are not equal\n";
    }
    else {
        cout << "Arrays are equal\n";
    }


    if (vec1 == vec2){
        cout << "Vectors are equal\n";
    }

    else{
        cout << "Vectors are not equal\n";
    }

    //cout << lengthArrOneCounter << "\n";
    //cout << lengthArrTwoCounter << "\n";

}
