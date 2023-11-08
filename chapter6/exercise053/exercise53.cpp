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
/*  
// (a)
int calc(int&, int&);
int calc(const int&, const int&);

// (b)
int calc(char*, char*);
int calc(const char*, const char*);


// (c)
int calc(char* a, char* b){
    cout << a << b << endl;
    return 42;
}
int calc(char* const a, char* const b){
    cout << a << b << endl;
    return 44;
}
*/

int main()
{



    /* (a) 
    
    calc(const int& ) --> We cannot bind a plain reference to a const object

    so calc(const object int, const object int) will call int calc(const int&, const int&);
    
    */

    /* (b) 
    
    int calc(const char*, const char*) --> 

    if we call calc(pointer to a const char, pointer to a const char) the compiler will choose int calc(const char*, const char*)
    if the argument is a pointe to nonconst, the function taking a plain pointer is called
    
    */

    /* (c) 
    
    char* (pointer to char)  vs char *const (const pointer to char)

    We end up with redefinition error because top-level consts are ignored
    That means that we are redeclaring calc again and this is an error in C++
    
    error: redefinition of 'int calc(char*, char*)'
    31 | int calc(char* const a, char* const b){
      |     ^~~~
    note: 'int calc(char*, char*)' previously defined here
    27 | int calc(char* a, char* b){

    
    */
//    char haha = 'h';
//    char* const ptr_haha = &haha;

//    cout << calc(ptr_haha, ptr_haha);


    return 0;
}
