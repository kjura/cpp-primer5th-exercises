#include <iostream>
#include <vector>
#include <cmath>
#include <string>

// g++ -std=c++20 -pedantic -Wall -Wextra -Werror -Wshadow -Wsign-conversion -g sandbox.cpp  -o sandbox
// g++ -std=c++20 -pedantic -Wall -Wextra -Wsign-conversion -g sandbox.cpp -o sandbox
// <br />
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::cin;

int main()
{

    string finalgrade;
    int grade = 0;

    cout << "Please provide your grade after prompt sign >> ";
    if(cin >> (grade)){
        finalgrade = (grade > 90) ? "high pass"
                            : ((grade <= 90) && (grade > 75)) ? "pass"
                            : ((grade <= 75) && (grade >= 60)) ? "low pass" 
                            : "fail";

        cout << finalgrade << endl;
    }

    // Can quickly go into spaghetti if you have lots of these question marks ...


    else{
        cout << "Wrong input! Aborting ...\n";
        return 0;
    }

    
    if (grade > 90){
        finalgrade = "high pass";
    }
    else if(((grade <= 90) && (grade > 75))){
        finalgrade = "pass";
    }
    else if(((grade <= 75) && (grade >= 60))){
        finalgrade = "low pass";
    }
    else{
        finalgrade = "fail";
    }

    cout << finalgrade << endl;

    // Better to use if, increased readability

    return 0;
}
