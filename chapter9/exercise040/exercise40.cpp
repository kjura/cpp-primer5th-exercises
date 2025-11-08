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

int main()

{

    // Reads 256 words --> resizes to 256 + (256 / 2) = 384 --> capacity likely stays the same
    // Reads 512 words --> resizes to 512 + (512 / 2) = 768 -- > capacity likely stays the same
    // Reads 1000 words --> resizes to 1000 + (1000 / 2) = 1500 --> reallocation to make space for 1500 > 1024 elements
    // Reads 1048 words --> resizes to 1048 + (1048 / 2) = 1572 --> reallocation to make space for 1572 > 1024 elements

    constexpr int container_size { 998 };
    constexpr int container_capacity { 1024 };

    vector<string> svec(container_size, "girl");
    cout << "Size of svec is: " << svec.size() << "\n";
    svec.reserve(container_capacity);
    cout << "Reserved memory for " << container_capacity << " elements" << "\n";
    string word;
    while (cin >> word)
        svec.push_back(word);
    cout << "Size of svec after the loop is: " << svec.size() << "\n";
    cout << "Container capacity after the loop is: " << svec.capacity() << "\n";
    svec.resize(svec.size()+svec.size()/2);
    cout << "Size of svec after resize is: " << svec.size() << "\n";
    cout << "Container capacity after resize is: " << svec.capacity() << "\n";


    return 0;
}
