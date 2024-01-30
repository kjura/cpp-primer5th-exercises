// g++ -std=c++20 -pedantic -Wall -Wextra -Werror -Wshadow -Wsign-conversion -g sandbox.cpp  -o sandbox
// g++ -std=c++20 -pedantic -Wall -Wextra -Wsign-conversion -g sandbox.cpp -o sandbox
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

inline Screen Screen::move(pos r, pos c){
    pos row = r * width;
    cursor = row + c;
    return *this;
}

char Screen::get(pos r, pos c) const {
    pos row = r * width;
    return contents[row + c];
}

inline Screen Screen::set(char c){
    contents[cursor] = c;
    return *this;
}

inline Screen Screen::set(pos r, pos col, char ch){
    contents[r * width + col] = ch;
    return *this;
}


int main()
{

    // Notice: we remove "&" sign (reference) from set,get,display return types

    // First, every time we would call move,set,display the return type would be of copy
    // This means that even though myScreen.move(4,0).set('#').display(cout) would accurately display the state
    // of myScreen after the transformations, it would later on display myScreen without previously applied changes
    // myScreen had been transformed before but the copy was immediately destroyed starting with the next
    // method invocation

    Screen myScreen(5, 5, 'X');
    myScreen.move(4,0).set('#').display(cout);
    cout << "\n";
    myScreen.display(cout);
    cout << "\n";

    return 0;
}
