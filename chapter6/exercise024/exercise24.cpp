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




/* 

    Hardcoded array, it only works for arrays with 10 elements
    If a user passes an array that has length <10 then this is UB

 */

// void print(const int ia[10]) // Pass a pointer to the first element of a const array of ten ints
// {
//     for (size_t i = 0; i != 10; ++i) // Iterate over every index in array parameter ia
//         cout << ia[i] << endl; // print every element
// }


void fix_print(const int ia[], size_t size){
    for (size_t i = 0; i != size; ++i) 
        cout << ia[i] << endl; 
}


int main()
{

    int arr[] = {1, 2, 3, 4};
    fix_print(arr, std::size(arr));


    return 0;
}
