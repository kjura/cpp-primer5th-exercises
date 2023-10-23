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

void contains_capital_letters(const std::string& word){

    for (auto& c : word){
        if (std::isupper(c)){
            cout << "The string " << word << " contains capital letter(s)" << "\n";
            break;
        }
    }

}

void change_string_to_lowercase(string& word){

    for (auto& c : word){
        if (std::isupper(c)){
            c = std::tolower(c);
        }
    }

    cout << "String after making everything lower: " << word << "\n"; 

}

int main()
{
    cout << "Please provide a string ...\n";
    string my_word {};
    cin >> my_word;
    /* 
    
    The parameters differ in the functions above 
    contains_capital_letters(const std::string& word) --> we put a reference to const because we only read a string

    change_string_to_lowercase(string& word) --> we remove const to ref, we want to change the string
    
    */

    contains_capital_letters(my_word);
    change_string_to_lowercase(my_word);

    return 0;
}
