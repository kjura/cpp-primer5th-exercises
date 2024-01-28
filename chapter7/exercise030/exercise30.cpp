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


struct MyClass{
    int a = 5;
    int b = 6;
    int x = 0;

    //MyClass& set(int new_value) { a = new_value;  b = new_value; return *this;};
    MyClass& set(int new_value) { this->a = new_value;  this->b = new_value; return *this;};

    void set_using_void(int x) {
        this->x = x; // declaration of ‘x’ shadows a member of ‘MyClass’ if x = x and this were not used
        // but still if -Werror=shadow used this will fail to compile
    }

    int get_some(MyClass& obj) { return obj.a; };
    // above equivalent to return (*ja)
    const MyClass& get(MyClass& element){
        return element;
    };
};

int main()
{

    /* 
    
    Pros: Maybe this? (taken from cpp ref) although -Werror prohibits this from compiling

    unqualified x refers to the parameter
                     // 'this->' required for disambiguation, take a look at void set_using_void() method
    
    */

    /* 
    
    Cons: Redundancy, additional cost of writing this to reference a given object every time
    
    */

    [[maybe_unused]] MyClass ja = MyClass();


    return 0;
}
