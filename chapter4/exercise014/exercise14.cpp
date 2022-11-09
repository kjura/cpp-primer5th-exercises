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

    int i;
    // Literals (42 in this case) are rvalues, left-hand operand must be a modifiable lvalue
    /* if (42 = i){ 
        ;
    } */


    // 42 is not zero, i is 42, the if statement evaluates as true and the body of if is executed
    if ((i = 42)){
        cout << "This one prints\n";
    }




    return 0;
}
