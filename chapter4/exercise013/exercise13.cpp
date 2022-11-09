#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
 
// g++ -std=c++20 -pedantic -Wall -Wextra -Werror -Wshadow -Wsign-conversion -g sandbox.cpp  -o sandbox
// g++ -std=c++20 -pedantic -Wall -Wextra -Wsign-conversion -g sandbox.cpp -o sandbox
// <br />
using std::cout;
using std::endl;

int main()
{

    int i; double d;
    cout << std::fixed << std::setprecision(1);

    d = i = 3.5;
    /*
    i gets 3.5 assinged, since it's an integer, the truncation happens and i is an int == 3
    Then the result is assinged to d, but d is a double, so 3 is converted to 3.0 and d == 3.0
    */

    cout << "d=" << d << ", i=" << i << "\n";

    
    i = d = 3.5;

    /*
    d is 3.5, i is an int, truncation takes place and finally i == 3;
    */

    cout << "d=" << d << ", i=" << i << "\n";

    return 0;
}
