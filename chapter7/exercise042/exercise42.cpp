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

        Employee(const string& n, const string& s, const unsigned a, const string& title)
            : name(n), surname(s), age(a), business_title(title) {};

        // If there is a new hire but we first want to introduce abstraction of this new hire
        Employee()
            : Employee("NO_INFO", "NO_INFO", 0, "NO_INFO") {cout << "Called a constructor for null Employee" << "\n";};

        // If there is a new intern but we only have initial info, no age and no declared role title
        Employee(const string& new_intern_name, const string& new_intern_surname)
            : Employee(new_intern_name, new_intern_surname, 0, "NA") {cout << "Called a constructor for new intern" << "\n";}; 

        void print_employee(){
            cout << name << " " << surname << " " << age << " " << business_title;
        }

};

int main()
{

    Employee john("John", "Doe", 42, "Managing Director");
    Employee new_hire_no_info;
    Employee new_intern("Lisa", "McConnel");
    cout << "\n";
    john.print_employee();
    cout << "\n";
    new_hire_no_info.print_employee();
    cout << "\n";
    new_intern.print_employee();
    cout << "\n";

    return 0;
}
