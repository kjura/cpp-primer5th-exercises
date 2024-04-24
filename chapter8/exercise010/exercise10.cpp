#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <fstream>
#include <sstream>

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

std::ostream& print_vector(std::ostream& out, const std::vector<string>& vec) {
    for (const auto& e : vec) {
        out << e << "\n";
    }

    return out;

}

int main()
{

    std::ifstream input_file { "input.txt" };
    if (!input_file){
        std::cerr << "Failed to open input.txt" << "\n";
        return -1;
    }

    std::vector<string> container {};
    std::string temp_line_container {};
    while (std::getline(input_file, temp_line_container)) {
        container.push_back(temp_line_container);
    }

    print_vector(cout, container);
    cout << "Below a word at a time..." << "\n\n";
    std::istringstream word_sstream {};
    std::string word {};
    for (const auto& e : container) {

        word_sstream.str(e);

        while (word_sstream >> word) {
            cout << word << " ";
        }
        cout << "\n";
        word_sstream.str("");
        word_sstream.clear();
    }


    return 0;
}
