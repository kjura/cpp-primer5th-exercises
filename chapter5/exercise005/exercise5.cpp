#include <iostream>
#include <vector>
#include <cmath>
#include <string>

// g++ -std=c++20 -pedantic -Wall -Wextra -Werror -Wshadow -Wsign-conversion -g sandbox.cpp  -o sandbox
// g++ -std=c++20 -pedantic -Wall -Wextra -Wsign-conversion -g sandbox.cpp -o sandbox
// PLACEHOLDEREXERCISENAME < input.txt > output.txt
// PLACEHOLDEREXERCISENAME ./exercise5 < input.txt >> output.txt
// <br />
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

int main()

{
    vector<string> scores = {"F", "D", "C", "B", "A", "A++"};
    string lettergrade;
    int grade;
    while (cin >> grade){    // cin >> grade;
    auto valid_grade_index = static_cast<std::vector<string>::size_type>(grade); 

    // Also it makes sure that grade - 50 won't be negative
    if (grade < 60){
        lettergrade = scores[0];
    }
    else{
        // grade - 50 will return 5x, 6x, 7x, 8x, 
        // remember that it is your responsibility to make sure that index for scores
        // is never negative!!
        lettergrade = scores[(valid_grade_index - 50) / 10];

    }

    cout << "Your score is " << lettergrade << "\n";

    }

    return 0;
}
