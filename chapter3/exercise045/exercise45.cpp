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
    for ( auto &row : ia){
        for ( auto &col : row){
            cout << col << " ";
        }
        cout << "\n";
    } 
    cout << "\n";


    /*USING ORDINARY FOR LOOP WITH SUBSCRIPTS*/

    for (auto row = 0; row != 3; ++row){
        for(auto col = 0; col != 4; ++col){
            cout << ia[row][col] << " ";
        }
        cout << "\n";
    }
    cout << "\n";

    /*USING ORDINARY FOR LOOP WITH POINTERS*/


    for (auto startRow = std::begin(ia); startRow != std::end(ia); ++startRow){
        for(auto startCol = *startRow; startCol != std::end(*startRow); ++startCol){
            cout << *startCol << " ";
        }
        cout << "\n";
    }
    

    return 0;
}