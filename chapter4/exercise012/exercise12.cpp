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

    int i = 1;
    int j = 2;
    int k = 3;

    // i != j < k 

    //  (i != (j < k) ) -> First operator: less than --> Second operator: inequality
 
    /*
    
    1. (j < k) is evaluated for True or False
    2. Since i is an int, bool (true or false) is promoted to (1/0)
    3. Finally, we compare i != 0 or i != 1
    
    
    */

    return 0;
}
