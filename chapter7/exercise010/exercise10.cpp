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

struct Person {
    string name = "PLACEHOLDER";
    string address = "PLACEHOLDER";

    const string& getName() const {return name;};
    const string& getAddress() const {return address;};
};

std::istream& read(std::istream& is, Person& human){
        is >> human.name >> human.address;
        return is;
    }

std::ostream& print(std::ostream& os, const Person& human){
    os << human.getName() << " " << human.getAddress();
    return os;
}

int main()
{

    /*
    
    if (read(read(cin, data1), data2))

    First it reads data1 and it saves it to the input stream, next 
    it add to the same stream data2, equivalent to

    if (cin >> data1.name >> data1.address >> data2.name >> data2.address)

    */

    Person me;
    Person you;
    if (cin >> me.name >> me.address >> you.name >> you.address){
        cout << "valid input" << endl;
    }
    else{
        cout << "Error" << endl;
    }
    

    return 0;
}
