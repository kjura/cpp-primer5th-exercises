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

    vector<string> scores = {"F", "D", "C", "B", "A", "A++"};
    string lettergrade;
    int grade;
    while (cin >> grade){    // cin >> grade;
    auto valid_grade_index = static_cast<std::vector<string>::size_type>(grade); 

    grade < 60 ? (lettergrade = scores[0]) : (lettergrade = scores[(valid_grade_index - 50) / 10]);
    // Can also be written as: lettergrade = grade < 60 ? scores[0] : scores[(grade - 50) / 10];

    cout << "Your score is " << lettergrade << "\n";

    }


    return 0;
}
