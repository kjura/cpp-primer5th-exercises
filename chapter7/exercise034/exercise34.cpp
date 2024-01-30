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



// note: this code is for illustration purposes only and reflects bad practice
// it is generally a bad idea to use the same name for a parameter and a member

int height; // Also, error (shadowing) for -Werror=shadow G++ compiler flag
class Screen {
    
    public:
        using pos = std::string::size_type;
        void dummy_fcn(pos height) {
        cursor = width * height; 
        }
    private:
        pos cursor = 0;
        pos height = 0, width = 0;

    //using pos = std::string::size_type; // Error: this won't compile, pos has not been declared so dummy_fcn(pos height)
    // canot resolve the type pos

};

int main()
{




    return 0;
}
