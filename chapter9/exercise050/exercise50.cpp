#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <algorithm>
#include <random>

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

std::vector<string> GenerateRandomVector(size_t NumberCount,int minimum, int maximum) {
    std::random_device rd; 
    std::mt19937 gen(rd()); // these can be global and/or static, depending on how you use random elsewhere

    std::vector<int> values(NumberCount); 
    std::uniform_int_distribution<> dis(minimum, maximum);
    std::generate(values.begin(), values.end(), [&](){ return dis(gen); });

    std::vector<string> output {};

     for (auto e : values) {

        output.push_back(std::to_string(e));

     } 

    return output;
}

int main()
{

    auto container { GenerateRandomVector(10, 0, 20) };

    for (const auto& e : container) {
        cout << e << "\n";
    }

    return 0;
}
