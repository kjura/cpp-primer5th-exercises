// g++ -std=c++20 -pedantic -Wall -Wextra -Werror -Wshadow -Wsign-conversion -g sandbox.cpp  -o sandbox
// g++ -std=c++20 -pedantic -Wall -Wextra -Wsign-conversion -g sandbox.cpp -o sandbox
// g++ -std=c++20 -pedantic -Wall -Wextra -Wsign-conversion -g program.cpp -o program
// <br />
// PLACEHOLDEREXERCISENAME < input.txt > output.txt
// PLACEHOLDEREXERCISENAME ./exercise5 < input.txt >> output.txt
// Redirection in powershell  Get-Content .\input.txt | .\<YOUREXERCISENAME>>.exe


// Class definitions
#include "Window_mgr.h"
#include "Screen.h"

// Standard lib imports 
#include <iostream>

using std::cout;
using std::endl;
using std::cin;
using std::string;

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

void Window_mgr::clear(ScreenIndex i){
    Screen& s = screens[i];
    s.contents = string(s.height * s.width, ' ');
}




int main()
{

    // Marking as finished but I don't like the solution, took it and applied the solution from
    // The internet, moving on and getting back to it at one point
    Screen scr = Screen(10, 10, '$');
    
    return 0;
}
