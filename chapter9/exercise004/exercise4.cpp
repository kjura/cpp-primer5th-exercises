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

bool found_you(veciter beg, veciter end, int pattern) {

    while (beg != end) {
        if (*beg == pattern) {
            return true;
        }
        ++beg;
    }

    return false;

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

    std::vector vec { 1, 2, 3, 4, 5, 6 };
    auto beg_vec { vec.cbegin() };
    auto end_vec { vec.cend() };
    int pat { myint };

    if (found_you(beg_vec, end_vec, pat)) {
        cout << pat << " is inside our vec\n";
    }
    else {
        cout << pat << " NOT inside our vec\n";
    }


    return 0;
}
