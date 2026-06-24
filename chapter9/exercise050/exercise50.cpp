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
using std::vector;
using std::string;


template <typename T>
void print(const T& c) {
    for (const auto& e : c) {
        cout << e << "\n";
    }
}


std::vector<string> GenerateRandomVector(const size_t NumberCount, const int minimum, const int maximum) {
    std::random_device rd; 
    std::mt19937 gen(rd()); 
    std::vector<int> values(NumberCount); 
    std::uniform_int_distribution<> dis(minimum, maximum);
    std::generate(values.begin(), values.end(), [&](){ return dis(gen); });

    std::vector<string> output {};

     for (auto e : values) {

        output.push_back(std::to_string(e));

     } 

    return output;
}


std::vector<string> GenerateRandomVector(const size_t NumberCount, const double minimum, const double maximum) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::vector<double> values(NumberCount);
    std::uniform_real_distribution<> dis(minimum, maximum);
    std::generate(values.begin(), values.end(), [&]() { return dis(gen); });

    std::vector<string> output {};

    for (auto e : values) {
        output.push_back(std::to_string(e));
    }

    return output;

}

int main()
{

    vector<string> container { GenerateRandomVector(4, 0, 10) };

    print(container);

    int sum { 0 };
    for (const auto& e : container) {
        sum += std::stoi(e);
    }

    cout << "Sum of numbers in container is " << sum << "\n";
    cout << "\n";

    vector<string> container_floats { GenerateRandomVector(4, 0.0, 2.0) };
    print(container_floats);

    double sum_floats {0};
    for (const auto& e : container_floats) {
        sum_floats += std::stod(e);
    }

    cout << "Sum of floating numbers in container is " << sum_floats << "\n";


    return 0;
}
