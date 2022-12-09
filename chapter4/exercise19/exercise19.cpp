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

    // (a) ptr != 0 && *ptr++

    /*
    
    LHS: check if pointer is not null, if it is expression is false
    RHS: increment pointer by one, yield unchanged copy and dereference it
    Can be incorrect, we don't know what is the next address, if it's a 
    null pointer we have UB
    Possible Correction: ptr != 0 && (*ptr)++
    
    */

    // (b) ival++ && ival
    /*
    LHS: Increment by one and yield the unincremented value if non-zero then true
    RHS: Check if non-zero (true), evaluates previously incremented ival
    Can be dangeours if used as an array index
    Possible Correction: Do not use it? I can't imagine to have such expression in my code, maybe
    I need some more time
    */

    // (c) vec[ival++] <= vec[ival]
    /*
    LHS: 
    RHS: Check if non-zero (true), evaluates previously incremented ival
    Can be dangeours if used as an array index
    Possible Correction: Do not use it? I can't imagine to have such expression in my code, maybe
    I need some more time
    */
    

    vector<int> hejka = {1,2,3};

    size_t ival = 0;
    if (hejka[ival++] <= hejka[ival]){
        cout << hejka[ival] << endl;
    }

    return 0;
}
