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



// Corrected code
using Type = std::string; // --> Ok, global scope, Type=doube overwrites only inside Exercise
Type initVal(); // Shadows Type initVal() inside Exercise

class Exercise {
    public:
        using Type = double; // --> Ok, but this applies only under Exercise namespace
        Type setVal(Type);
        Type initVal(); // which initVal? The public member
    private:
        int val;
};

Exercise::Type Exercise::initVal(){
    return 42;
}

Exercise::Type Exercise::setVal(Exercise::Type parm) {
    val = parm + initVal();
    return val;
};


int main(){

/*  typedef string Type;
    Type initVal();

    class Exercise {
        public:
            typedef double Type;
            Type setVal(Type);
            Type initVal(); --> No definition of initVal(), declared inside but not defined error
        private:
            int val;
    };


    --> Wrong type for "Type", need to use scope operator to indicate that we want Type=double
    --> Same with Type parm
    --> Without it, the compiler thinks that we intend to use using Type = std::string;
    Type Exercise::setVal(Type parm) { 
        val = parm + initVal();
        return val;
    } */

    [[maybe_unused]] Exercise ex = Exercise();
    cout << "Hello!" << endl;


    return 0;
}
