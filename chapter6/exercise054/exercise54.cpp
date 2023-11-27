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

int my_func(int param1, int param2);

int main()
{


    // (&) is optional
    vector<int(*)(int, int)> my_vector = {&my_func, &my_func}; // Probably automatically converted to a pointer

    cout << "Please provide first pair of arguments seperated by a space \n";
    int input_1 {};
    int input_2 {};
    cin >> input_1 >> input_2;
    cout << "Output " << my_vector[0](input_1, input_2) << "\n";
    cout << "Please provide first pair of arguments seperated by a space \n";
    cin >> input_1 >> input_2;
    cout << "Output " << my_vector[1](input_1, input_2) << "\n";


    return 0;
}


int my_func(int param1, int param2){
    cout << "Called function my_func with param1 = " << param1 << " and param2 = " << param2 << endl;
    return (param1 + param2);
}