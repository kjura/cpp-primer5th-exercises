#include <iostream>
#include <vector>
#include <cmath>
#include <string>

// g++ -std=c++20 -pedantic -Wall -Wextra -Werror -Wshadow -Wsign-conversion -g sandbox.cpp  -o sandbox
// g++ -std=c++20 -pedantic -Wall -Wextra -Wsign-conversion -g sandbox.cpp -o sandbox
// <br />
// PLACEHOLDEREXERCISENAME < input.txt > output.txt
// PLACEHOLDEREXERCISENAME ./exercise5 < input.txt >> output.txt
// Redirection in powershell  Get-Content .\input.txt | .\<YOUREXERCISENAME>>.exe
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::cin;


class Y; // We declare a class here for forward declaration so Y can be seen by X, before Y is defined

class X {

    public:
        Y* ptr_to_Y;
        string words_X;
};

class Y {

    public:
        X obj_of_type_X;
        string words_Y;

};


int main()
{

    X iksik = X();
    Y igrek = Y();
    iksik.words_X = "X-Man team!";
    igrek.words_Y = "Y u do dis!?";


    cout << iksik.words_X << " " << igrek.words_Y << "\n";
    


    return 0;
}
