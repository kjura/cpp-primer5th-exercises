#include <climits>
#include <iostream>
#include <cmath>
#include <ostream>
#include <string>

// g++ -std=c++20 -pedantic -Wall -Wextra -Werror -Wshadow -Wsign-conversion -g sandbox.cpp  -o sandbox
// g++ -std=c++20 -pedantic -Wall -Wextra -Wsign-conversion -g sandbox.cpp -o sandbox
// <br />
// PLACEHOLDEREXERCISENAME < input.txt > output.txt
// PLACEHOLDEREXERCISENAME ./exercise5 < input.txt >> output.txt
// Redirection in powershell  Get-Content .\input.txt | .\<YOUREXERCISENAME>>.exe
using std::cout;
using std::endl;
using std::string;

// Exercise 9.47: Write a program that finds each numeric character and then
// each alphabetic character in the `string` "ab2c3d7R4E6". Write two
// versions of the program. The first should use `find_first_of`, and the second `find_first_not_of`.

namespace constants {    
    inline const string numbers { "0123456789" };
    inline const string letters { "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ" };
}


enum class Func_Find_First{
    not_of,
    of
};

enum class Character_Type {
    numeric,
    letters
};

std::ostream& operator<<(std::ostream& os, const Character_Type ct) {
    switch (ct) {
        case Character_Type::letters: return os << "alphabetic";
        case Character_Type::numeric: return os << "numeric";
    }

    return os;
}


void find_f_method_of(const string& str, const string& consts_chars, Character_Type ct) {

        string::size_type pos = 0;
        while ((pos = str.find_first_of(consts_chars, pos)) != string::npos) {
            cout << "found " << ct << " character at index: " << pos << " element is " << str[pos] << endl;
            ++pos; 
    }

}

void find_f_method_not_of(const string& str, const string& consts_chars, Character_Type ct) {

        string::size_type pos = 0;
        while ((pos = str.find_first_not_of(consts_chars, pos)) != string::npos) {
            cout << "found " << ct << " character at index: " << pos << " element is " << str[pos] << endl;
            ++pos; 


}
}

void find_f_func(const string& str, Func_Find_First fff) {

    if (fff == Func_Find_First::of ) {

        find_f_method_of(str, constants::numbers, Character_Type::numeric);
        find_f_method_of(str, constants::letters, Character_Type::letters);

    }
    else {

        find_f_method_not_of(str, constants::letters, Character_Type::numeric);
        find_f_method_not_of(str, constants::numbers, Character_Type::letters);
    }

}

int main()
{

    // a: 0, 
    // b: 1,
    // 2: 2,
    // c: 3,
    // 3: 4, 
    // d: 5, 
    // 7:6, 
    // R:7, 
    // 4:8, 
    // E:9, 
    // 6:10


    // f(str, of/on) -> done

    string pat { "ab2c3d7R4E6" };
    find_f_func(pat, Func_Find_First::of);
    cout << "####################################################" << "\n";
    find_f_func(pat, Func_Find_First::not_of);

    return 0;
}
