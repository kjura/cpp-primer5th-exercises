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


bool isShorter(const string& s1, const string& s2) {
    return s1.size() < s2.size();
}


void elimDups(vector<string>& vec) {

    cout << "Vec once read into the input:\n";
    print_collection(vec);
    cout << "\n";

    cout << "Sorting the vector...\n";
    std::sort(vec.begin(), vec.end());
    cout << "\n";

    cout << "Vec sorted:\n";
    print_collection(vec);
    cout << "\n";

    cout << "Applying unique...\n";
    auto unique_result { std::unique(vec.begin(), vec.end()) };
    cout << "\n";

    cout << "Erasing duplicates...\n";
    vec.erase(unique_result, vec.end());
    cout << "\n";

}

int main()
{


    vector<string> v { "cat", "mouse", "cat", "dog", "dog", "mouse", "zebra", "cat", "kangaroo" };
    elimDups(v);
    print_collection(v);
    cout << "\n";
    std::stable_sort(v.begin(), v.end(), isShorter);
    print_collection(v);



    return 0;
}
