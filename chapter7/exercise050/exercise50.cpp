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

    friend std::istream& read(std::istream& is, Person& human);
    friend std::ostream& print(std::ostream& os, const Person& human);

    public:
        Person() = default;
        Person(const string& nme, const string& addr) : name(nme), address(addr) {};

        const string& getName() const {return name;};
        const string& getAddress() const {return address;};

    private:
        string name = "PLACEHOLDER";
        string address = "PLACEHOLDER";


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

    // No, there is no constructor with a single argument (besides default)

    return 0;
}

