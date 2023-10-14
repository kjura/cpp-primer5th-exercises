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

void swap(int** a, int** b){
    int* temp = *a;

    *a = *b;
    *b = temp;

}

int main()
{
    cout << "Please provide two integers seperated by a space ...\n";
    int a{};
    int b{};
    cin >> a >> b;
    cout << "a=" << a << " and " << "b=" << b << "\n";
    int* ptr_a = &a;
    int* ptr_b = &b;
    int** ptr_to_ptr_a = &ptr_a;
    int** ptr_to_ptr_b = &ptr_b;
    cout << "ptr_a=" << ptr_a << " and " << "ptr_b=" << ptr_b << "\n";
    cout << "Pointer to pointer to a is " << ptr_to_ptr_a << " and " << "Pointer to pointer to b is" << ptr_to_ptr_b << "\n";
    swap(ptr_to_ptr_a, ptr_to_ptr_b);


    return 0;
}
