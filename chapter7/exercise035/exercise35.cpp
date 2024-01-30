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


// using Type = std::string;
// Type initVal(); // Shadows Type initVal() inside Exercise

// class Exercise {
//     public:
//         using Type = double;
//         Type setVal(Type);
//         Type initVal(); // which initVal? The public member
//     private:
//         int val;
// };

// Type Exercise::setVal(Type parm) {
//     val = parm + initVal();
//     return val;
// }


// int height; // defines a name subsequently used inside Screen
// class Screen {
//     public:
//         typedef std::string::size_type pos;
//         void setHeight(pos);
//         pos height = 0; // hides the declaration of height in the outer scope
// };

// Screen::pos verify(Screen::pos);
// void Screen::setHeight(pos var) {
//     // var: refers to the parameter
//     // height: refers to the class member
//     // verify: refers to the global function
//     height = verify(var);
// }

class Person{
    public:
        Person(string n, string s) : name(n), surname(s) {};

    private:
        string name {};
        string surname {};
}


string& Person::get_name(){
    return name; 
};

string& Person::get_surname(){
    return surname; 
};


int main()
{

    Person john = Person("John", "Doe");
    cout << john.get_name() << endl;


    return 0;
}
