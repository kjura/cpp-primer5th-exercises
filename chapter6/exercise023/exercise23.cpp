#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <iterator>

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

// Using a marker to specify the extent of an array

// void print_using_end_marker(const int* ptr_to_first_element){
//     if (ptr_to_first_element != nullptr){
//         // It's hard to use it on ints without a marker
//         // Every entry is a valid element
//     }
// }

// Print integer
void print_int(int a){
    cout << a << "\n";
}

// Using the Standard Library Conventions
void print_standard(const int* beg, const int* end){
    while (beg != end){
        cout << *beg++ << "\n";
    }
}

// Explicitly passing a size parameter
void print_explicit(const int* array_elem, size_t size){
    for (size_t i = 0; i < size; i++){
        cout << array_elem[i] << "\n";
    }
}

// Array reference params
void print_array_refs(int (&arr) [2]){
    for (auto& e : arr){
        cout << e << "\n";
    }
}



int main()
{

    int i = 0; 
    int j[2] = {0, 1};

    print_int(i);
    cout << "\n";
    print_standard(std::begin(j), std::end(j));
    cout << "\n";
    print_explicit(j, std::size(j));
    cout << "\n";
    print_array_refs(j);


    return 0;
}
