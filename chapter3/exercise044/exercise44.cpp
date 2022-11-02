#include <iostream>
#include <vector>
#include <cmath>
 
// g++ -std=c++20 -pedantic -Wall -Wextra -Werror -Wshadow -Wsign-conversion -g sandbox.cpp  -o sandbox
// g++ -std=c++20 -pedantic -Wall -Wextra -Wsign-conversion -g sandbox.cpp -o sandbox
// <br />
using std::cout;
using std::endl;

using AutoArrayRow = int (&)[4];
using AutoArrayCol = int &;

using ArraySize = size_t;

using ArrayRowPtrBeg = int (*)[4];
using ArrayColPtrBeg = int *;


int main()
{
    constexpr std::size_t i = 3;
    constexpr std::size_t j = 4;

    int ia[i][j] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    

    // Using AutoArrayRow instead of auto
    for ( AutoArrayRow row : ia){
        for ( AutoArrayCol col : row){
            cout << col << " ";
        }
        cout << "\n";
    } 
    cout << "\n";
    

    // Using ArraySize instead of size_t
    for (ArraySize row = 0; row != i; ++row){
        for(ArraySize col = 0; col != j; ++col){
            cout << ia[row][col] << " ";
        }
        cout << "\n";
    }
    cout << "\n";

    // Using ArrayRowPtrBeg and ArrayColPtrBeg instead of pointers to outer and inner array(s)
    for (ArrayRowPtrBeg startRow = std::begin(ia); startRow != std::end(ia); ++startRow){
        for(ArrayColPtrBeg startCol = *startRow; startCol != std::end(*startRow); ++startCol){
            cout << *startCol << " ";
        }
        cout << "\n";
    }
    

    return 0;
}