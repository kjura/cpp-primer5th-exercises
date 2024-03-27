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

class Debug {

    public:

        // Constructors constexpr

        // Constructor to set all for true
        constexpr Debug(bool flag = true) : type_error(flag), value_error(flag), unknown_error(flag) {  };

        // Constructor to set every error separately
        constexpr Debug(bool flag_type, bool flag_value, bool flag_unknown) :
            type_error(flag_type), value_error(flag_value), unknown_error(flag_unknown) {  };

        // Check flag for any error
        constexpr bool any_error() { return type_error || value_error || unknown_error; }

        // Print state
        void print() { cout << type_error << " " << value_error << " " << unknown_error; };


        // setters
        void set_type(bool flag) { type_error = flag; }
        void set_value(bool flag) { value_error = flag; }
        void set_unknonw(bool flag) { unknown_error = flag; }



    private:
        bool type_error;
        bool value_error;
        bool unknown_error;
};

int main()
{

    Debug stan;

    stan.print();
    cout << endl;


    return 0;
}
