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

int main()
{

    string str1 = "John";
    string str2 = "John";

    char cstr1[] = "John";
    char cstr2[] = "John";

    if (str1 == str2){
        cout << "str1 and str2 are equal\n";
    }

    if (str1 > str2){
        cout << "str1 is greater than str2\n";
    }

    if (str1 < str2){
        cout << "str1 is less than str2\n";
    }

    cout << "\nC string comparison below\n\n";

    if (strcmp(cstr1, cstr2) == 0){
        cout << "cstr1 and cstr2 are equal\n";
    }

    if (strcmp(cstr1, cstr2) > 0){
        cout << "cstr1 is greater than cstr2\n";
    }

    if (strcmp(cstr1, cstr2) < 0){
        cout << "cstr1 is less than cstr2\n";
    }


    return 0;
}
