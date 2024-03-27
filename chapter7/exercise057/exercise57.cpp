// g++ -std=c++20 -pedantic -Wall -Wextra -Werror -Wshadow -Wsign-conversion -g sandbox.cpp  -o sandbox
// g++ -std=c++20 -pedantic -Wall -Wextra -Wsign-conversion -g sandbox.cpp -o sandbox
// <br />
// PLACEHOLDEREXERCISENAME < input.txt > output.txt
// PLACEHOLDEREXERCISENAME ./exercise5 < input.txt >> output.txt

#include <cmath>
#include <vector>
#include <iostream>
#include <string>

using std::vector;
using std::string;
using std::cout;
using std::endl;

class Account {

    public:
        void calculate() { amount += amount * interestRate; }
        static double rate() { return interestRate; }
        static void rate(double);
        void set_owner(string own) { owner = own; }
        void set_ammount(double amn) { amount = amn; }
        void print_data() { cout << owner << " " << amount << " " << interestRate;}

    private:
        std::string owner;
        double amount;
        static double interestRate;
        static double initRate();

};


void Account::rate(double newRate) {
    interestRate = newRate;
}

double Account::interestRate = 3.14;
double Account::initRate(){
    interestRate = 0.14 * 2;
    return interestRate;
}

// double Account::interestRate = initRate();



int main() {



    Account ac;
    ac.set_owner("John Doe");
    ac.set_ammount(2000);
    ac.rate(0.003);
    ac.calculate();

    ac.print_data();
    cout << endl;

}