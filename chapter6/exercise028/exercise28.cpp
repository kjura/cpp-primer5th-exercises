#include <iostream>
#include <vector>
#include <cmath>
#include <string>

// g++ -std=c++20 -pedantic -Wall -Wextra -Werror -Wshadow -Wsign-conversion -g sandbox.cpp  -o sandbox
// g++ -std=c++20 -pedantic -Wall -Wextra -Wsign-conversion -g sandbox.cpp -o sandbox
// <br />
// PLACEHOLDEREXERCISENAME < input.txt > output.txt
// PLACEHOLDEREXERCISENAME ./exercise5 < input.txt >> output.txt
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::cin;


// void error_msg(ErrCode e, initializer_list<string> il){

//  initializer_list<string> il == array of values of the specified type (string)

//     cout << e.msg() << ": ";
//     for (const auto &elem : il){       ########### elem is a reference to const string&
//             cout << elem << " " ;      ########### initalizer list takes an array of strings,
//     }
//     cout << endl;
// }


void haha(std::initializer_list<string> lst){
    for (const string& elem : lst){
        cout << elem << "\n";
    }
}


int main()
{

    std::initializer_list<string> my_list = {"John", "Doe", "Jane", "Doe"};
    haha(my_list); 


    return 0;
}
