#include <iostream>
#include <vector>
#include <cmath>
#include <string>
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

using veciter = std::vector<int>::const_iterator;

veciter found_you(veciter beg, veciter end, int pattern) {

    veciter iter { beg };

    while (iter != end) {
        if (*iter == pattern) {
            return iter;
        }
        ++iter;
    }

    return end;

}

int main(int argc, char* argv[])
{
    if (argc <= 1)
	{
		if (argv[0])
			std::cout << "Usage: " << argv[0] << " <number>" << '\n';
		else
			std::cout << "Usage: <program name> <number>" << '\n';

		return 1;
	}

    std::stringstream convert{ argv[1] };
    int myint{};
	if (!(convert >> myint)) {
        std::cerr << "Failed to convert main function arg to int, only ints are accceptable \n" << "\n";
        return -1;
    }

    // std::vector<int> vec { 1, 2, 3, 4 };
    // std::vector<int> vec { 42 };
    // std::vector<int> vec;
    std::vector<int> vec { 1, 2, 3, 4 };

    int pat { myint };
    auto beg_vec { vec.cbegin() };
    auto end_vec { vec.cend() };
    veciter output { found_you(beg_vec, end_vec, pat) };

    if (output != end_vec) {
        cout << pat << " is in your vector at position " << output - beg_vec << "\n";
    }

    else {
        cout << "Empty vector or " << pat << " not found\n";
    }


    return 0;
}
