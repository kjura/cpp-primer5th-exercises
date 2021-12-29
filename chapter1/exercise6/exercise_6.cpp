#include <iostream>


// g++ -std=c++11 -pedantic -Wall -Wextra -Werror -Wshadow -Wsign-conversion -g sandbox.cpp -o sandbox

// Not legal: There is an error -> expected primary-expression before ‘<<’ token
// How to fix it: remove semicolons, the left-hand operator must be an ostream object.

int main(){

     int v1, v2;
     v1 = 20;
     v2 = 10;
     std::cout << "The sum of " << v1;
               << " and " << v2;
               << " is " << v1 + v2 << std::endl;
    
   
    return 0;
}