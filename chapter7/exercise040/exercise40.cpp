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


class Employee {

    string name {"PLACEHOLDER"};
    string surname {"PLACEHOLDER"};
    unsigned age {0};
    string business_title {"PLACEHOLDER"};

    public:

        Employee() = default;
        Employee(const string& n, const string& s, const unsigned a, const string& title)
            : name(n), surname(s), age(a), business_title(title) {};

        void print_employee(){
            cout << name << " " << surname << " " << age << " " << business_title;
        }

};


int main()
{

    Employee defEm = Employee();
    Employee Em = Employee("John", "Doe", 42, "Analyst");

    defEm.print_employee();
    cout << "\n";
    Em.print_employee();
    cout << "\n";


    return 0;
}
