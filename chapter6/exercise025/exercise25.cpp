#include <iostream>
#include <vector>
#include <cmath>
#include <string>

// g++ -std=c++20 -pedantic -Wall -Wextra -Werror -Wshadow -Wsign-conversion -g sandbox.cpp  -o sandbox
// g++ -std=c++20 -pedantic -Wall -Wextra -Wsign-conversion -g sandbox.cpp -o sandbox
// <br />
// PLACEHOLDEREXERCISENAME < input.txt > output.txt
// PLACEHOLDEREXERCISENAME ./exercise5 < input.txt >> output.txt
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::cin;

// ./exercise25.exe John Doe 

int main(int argc, char* argv[])
{
    if (argc != 3){
        cout << "Main can accept EXACTLY two arguments for this program to run. You provided " << (argc - 1) << ". Aborting ..." << "\n";
        return 0;
    }

    string concat_args{};
    // for (auto e : argv){
        
    // }

    for (int i = 1; i < argc; i++){
        concat_args += argv[i];
    }

    cout << "Concatenated arguments provided to the main: " << concat_args << "\n";


    return 0;
}
