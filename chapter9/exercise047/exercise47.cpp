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

// Exercise 9.47: Write a program that finds each numeric character and then
// each alphabetic character in the `string` "ab2c3d7R4E6". Write two
// versions of the program. The first should use `find_first_of`, and the second `find_first_not_of`.


void find_f(const string& s) {

    const string numbers { "0123456789" };
    const string letters { "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ" };
    
    string::size_type pos = 0;
    // each iteration finds the next number in name
    while ((pos = s.find_first_of(numbers, pos)) != string::npos) {
        cout << "found numeric character at index: " << pos << " element is " << s[pos] << endl;
        ++pos; 
    }

    pos = 0;
    while ((pos = s.find_first_of(letters, pos)) != string::npos) {
        cout << "found alphabetic character at index: " << pos << " element is " << s[pos] << endl;
        ++pos; 
    }

}


void find_f_not([[maybe_unused]] const string& s) {
}

int main()
{

    string pat { "ab2c3d7R4E6" };


    find_f(pat);
    // find_f_not(pat);


    return 0;
}
