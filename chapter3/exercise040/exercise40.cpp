#include <iostream>
#include <vector>
#include <cmath>
#include <cstring>
 
// g++ -std=c++20 -pedantic -Wall -Wextra -Werror -Wshadow -Wsign-conversion -g sandbox.cpp  -o sandbox
// g++ -std=c++20 -pedantic -Wall -Wextra -Wsign-conversion -g sandbox.cpp -o sandbox
// <br />
using std::cout;
using std::endl;
using std::string;
using std::strlen;
using std::strcpy;
using std::strcat;

int main()
{

    const char strLiteralOne[] = "Great";
    const char strLiteralTwo[] = "Job!";


    // Return length of string literals NOT COUNTING THE NULL!
    //size_t lengthLiteralOne = strlen(strLiteralOne) + 1; // 6 + 1 = 7
    //size_t lengthLiteralTwo = strlen(strLiteralTwo) + 1; // 5 + 1 = 6
    
    // 7 + 6 - 1 = 12, //13 characters to hold including null sign
    const size_t sizeForBigStr = 12;
    

    //cout << lengthLiteralOne << " " << lengthLiteralTwo << "\n";

    char bigStr[sizeForBigStr];

    strcpy(bigStr, strLiteralOne);
    strcat(bigStr, " ");
    strcat(bigStr, strLiteralTwo);


    cout << bigStr << "\n";



    return 0;
}
