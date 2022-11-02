#include <iostream>
#include <vector>
#include <cmath>
 
// g++ -std=c++20 -pedantic -Wall -Wextra -Werror -Wshadow -Wsign-conversion -g sandbox.cpp  -o sandbox
// g++ -std=c++20 -pedantic -Wall -Wextra -Wsign-conversion -g sandbox.cpp -o sandbox
// <br />
using std::cout;
using std::endl;

int main()
{

    int ia[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};



    /* USING RANGE FOR*/
    for ( int (&row)[4] : ia){
        for ( int &col : row){
            cout << col << " ";
        }
        cout << "\n";
    } 
    cout << "\n";
    /*USING ORDINARY FOR LOOP WITH SUBSCRIPTS*/


    for (size_t row = 0; row != 3; ++row){
        for(size_t col = 0; col != 4; ++col){
            cout << ia[row][col] << " ";
        }
        cout << "\n";
    }
    cout << "\n";

    /*USING ORDINARY FOR LOOP WITH POINTERS*/


    for (int (*startRow)[4] = std::begin(ia); startRow != std::end(ia); ++startRow){
        for(int *startCol = *startRow; startCol != std::end(*startRow); ++startCol){
            cout << *startCol << " ";
        }
        cout << "\n";
    }
    

    return 0;
}
