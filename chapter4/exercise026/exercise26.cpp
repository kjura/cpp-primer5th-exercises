#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <bitset>

// g++ -std=c++20 -pedantic -Wall -Wextra -Werror -Wshadow -Wsign-conversion -g sandbox.cpp  -o sandbox
// g++ -std=c++20 -pedantic -Wall -Wextra -Wsign-conversion -g sandbox.cpp -o sandbox
// <br />
using std::cout;
using std::endl;
using std::vector;
using std::string;


int main()
{

    unsigned int quiz1 = 1; // minimum 16 bits (not 32 as would be in case of long)
    std::cout << (std::bitset<32>(quiz1)) << endl;
    /*
    Since we would like to represent 30 students by bits (exam passed/failed) and standard
    guarantees that minimum size for int is 16 and for long 32, it follows that int could not
    hold all of the students because of its size.
    */

    
}