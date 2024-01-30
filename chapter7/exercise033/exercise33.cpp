// g++ -std=c++20 -pedantic -Wall -Wextra -Werror -Wshadow -Wsign-conversion -g sandbox.cpp  -o sandbox
// g++ -std=c++20 -pedantic -Wall -Wextra -Wsign-conversion -g sandbox.cpp -o sandbox
// g++ -std=c++20 -pedantic -Wall -Wextra -Wsign-conversion -g program.cpp -o program
// <br />
// PLACEHOLDEREXERCISENAME < input.txt > output.txt
// PLACEHOLDEREXERCISENAME ./exercise5 < input.txt >> output.txt
// Redirection in powershell  Get-Content .\input.txt | .\<YOUREXERCISENAME>>.exe


// Class definitions
#include "Screen.h"
#include "Window_mgr.h"

// Standard lib imports 
#include <iostream>

using std::cout;
using std::endl;
using std::cin;

void print_screen(Screen& scr){
    cout << scr.get() << endl;
}

void print_screen(Screen& scr, std::string::size_type ht, std::string::size_type wd){
    cout << scr.get(ht, wd) << endl;
}

inline Screen& Screen::move(pos r, pos c){
    pos row = r * width;
    cursor = row + c;
    return *this;
}

char Screen::get(pos r, pos c) const {
    pos row = r * width;
    return contents[row + c];
}

inline Screen& Screen::set(char c){
    contents[cursor] = c;
    return *this;
}

inline Screen& Screen::set(pos r, pos col, char ch){
    contents[r * width + col] = ch;
    return *this;
}

Screen::pos Screen::size() const{
    return height * width;
}


int main()
{

    /* 


    This won't compile unless:

    1) We use the scope operator :: to indicate that pos is defined in Screen --> Screen::pos
    2) size() is declared in Screen
    3) size() is also indicated as a const member in Screen
    
    pos Screen::size() const{

        return height * width;
    
    }

    
    */

    Screen scr = Screen(20, 20, '%');

    cout << "It works! " << scr.size() << endl;


    return 0;
}
