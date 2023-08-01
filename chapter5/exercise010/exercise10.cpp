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
    char my_text;
    while (cin >> my_text){
        if (my_text == 'a' or my_text == 'A'){
            ++a_count;
        }
        if (my_text == 'e' or my_text == 'E')
        {
            ++e_count;
        }
        if (my_text == 'i' or my_text == 'I')
        {
            ++i_count;
        }
        if (my_text == 'o' or my_text == 'O')
        {
            ++o_count;
        }
        if (my_text == 'u' or my_text == 'U')
        {
            ++u_count;
        }
        
    }

    cout << "Vowel count:\n"
         << "a: " << a_count << "\n"
         << "e: " << e_count << "\n"
         << "i: " << i_count << "\n"
         << "o: " << o_count << "\n"
         << "u: " << u_count << "\n"
         ;

    return 0;
}
