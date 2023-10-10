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

void swap(int& ref1, int& ref2){
    int temp = ref1; // temp variable to hold the initial value of ref1
    ref1 = ref2; // change ref1 to ref2 --> ref1 is b = 69 now
    ref2 = temp; // change ref2 to the initial value of ref1 --> use temp variable to bring back ref1
    // 
}


int main()
{

    int a {42};
    int b {69};
    cout << "a = " << a << " and b = " << b << endl;
    swap(a, b);
    cout << "a = " << a << " and b = " << b << endl;

    /*
    A version with references seem safer (pointers are notoriously hard to use)
    Watch out for global state, we are changing values in some different block/scope, potential bugs
    */


    return 0;
}
