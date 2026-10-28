#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <algorithm>

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


template <typename T>
void print_collection(const T& c) {

    for (const auto& e : c) {
        cout << e << " ";
    }

    cout << "\n";
}


bool isFive(const string& s) {
    return s.size() >= 5;
}


void print_up_to_partition(const vector<string>& v, vector<string>::const_iterator partition_point) {

    for (auto it { v.cbegin() }; it != partition_point; ++it) {
        cout << *it << "\n";
    }

}

void print_after_partition(const vector<string>& v, vector<string>::const_iterator partition_point) {

    for (auto it { partition_point }; it != v.cend(); ++it) {
        cout << *it << "\n";
    }

}


int main()
{


    vector<string> v { "Alice", "Bob", "Amanda", "Paris", "Sy", "Adam", "Bradley" };
    auto part_point { std::partition(v.begin(), v.end(), isFive) };

    cout << "Elements with 5 or more chars\n";
    print_up_to_partition(v, part_point);

    cout << "\n";

    cout << "Elements with less than 5 chars\n";
    print_after_partition(v, part_point);


    return 0;
}
