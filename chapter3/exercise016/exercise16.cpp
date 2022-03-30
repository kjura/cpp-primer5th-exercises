#include <algorithm>
#include <string>
#include <iostream>
#include <vector>

// g++ -std=c++20 -pedantic -Wall -Wextra -Werror -Wshadow -Wsign-conversion -g PLACEHOLDER.cpp  -o PLACEHOLDER
// g++ -std=c++20 -pedantic -Wall -Wextra -Wsign-conversion -g PLACEHOLDER.cpp -o PLACEHOLDER
// <br />

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::vector;

/* This program could be done by defining two functions, but I'm
a) Too lazy to do that
b) Functions are in Chapter 6
c) C++ is hard and I don't even know how to declare a function */



int main()
{


    vector<int> v1; // Zero elements, empty vector, undefined value
    cout << "Size of a vector v1: " << v1.size() << endl;
    cout << "Elements in v1: ";
    for (auto &e : v1){
        cout << e << " "; // No elements
    }
    cout << endl;
    cout << endl;


    vector<int> v2(10); // 10 elements, value initalized, vector has ints inside so 10 zeros.
        cout << "Size of a vector v2: " << v2.size() << endl;
    cout << "Elements in v2: ";
    for (auto &e : v2){
        cout << e << " "; 
    }
    cout << endl;
    cout << endl;

    
    vector<int> v3(10, 42); // 10 elements with value 42 of type int
        cout << "Size of a vector v3: " << v3.size() << endl;
    cout << "Elements in v3: ";
    for (auto &e : v3){
        cout << e << " "; 
    }
    cout << endl;
    cout << endl;


    vector<int> v4{10}; // 1 element with value 10 of type int
        cout << "Size of a vector v4: " << v4.size() << endl;
    cout << "Elements in v4: ";
    for (auto &e : v4){
        cout << e << " "; 
    }
    cout << endl;
    cout << endl;



    vector<int> v5{10, 42}; // 2 elements with values 10 and 42 of type int
        cout << "Size of a vector v5: " << v5.size() << endl;
    cout << "Elements in v5: ";
    for (auto &e : v5){
        cout << e << " "; 
    }
    cout << endl;
    cout << endl;



    vector<string> v6{10}; // 10 default initalized elements
    cout << "Size of a vector v6: " << v6.size() << endl;
    cout << "Elements in v6: ";
    for (auto &e : v6){
        
        cout << e << " "; // Empty Strings inside
        
    }
    cout << endl;
    cout << endl;



    vector<string> v7{10, "hi"}; // 10 elements with "hi" value of type int
        cout << "Size of a vector v7: " << v7.size() << endl;
    cout << "Elements in v7: ";
    for (auto &e : v7){
        cout << e << " "; 
    }
    cout << endl;
    cout << endl;



    return 0;
}