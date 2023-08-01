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

int main()
{

    cout << "Enter your text: ";
    cout << "\n";
    unsigned int a_count = 0, e_count = 0, i_count = 0, o_count = 0, u_count = 0;
    unsigned int tab_count = 0, space_count = 0, newline_count = 0;
    char my_text;

    while (cin.get(my_text)){

        if (sign == 'a' or sign == 'A'){
            ++a_count;
        }
        if (sign == 'e' or sign == 'E')
        {
            ++e_count;
        }
        if (sign == 'i' or sign == 'I')
        {
            ++i_count;
        }
        if (sign == 'o' or sign == 'O')
        {
            ++o_count;
        }
        if (sign == 'u' or sign == 'U')
        {
            ++u_count;
        }
        if (sign == '\n'){
            ++newline_count;
        }
        if (sign == '\t'){
            ++tab_count;
        }
        if (sign == ' '){
            ++space_count;
        }
        
    }

    cout << "Vowel count:\n"
         << "a: " << a_count << "\n"
         << "e: " << e_count << "\n"
         << "i: " << i_count << "\n"
         << "o: " << o_count << "\n"
         << "u: " << u_count << "\n"
         << "tab character: " << tab_count << "\n"
         << "newline character: " << newline_count << "\n"
         << "space character: " << space_count << "\n"
         ;

         // Getline probably(?) does not copy '\n'
         // Use "" --> https://stackoverflow.com/a/64943053

    return 0;
}