#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <list>

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


/* 

Exercise 9.21: Explain how the loop from page 345 that used the return from `insert`
to add elements to a `list` would work if we inserted into a `vector` instead.

 */


template<typename T>
void print(T lst){
    for (auto e : lst) {
        cout << e << "\n";
    }
}

int main()
{

    // std::list<string> lst;
    // auto iter = lst.begin();
    // string word { };
    // while (cin >> word){
    //     iter = lst.insert(iter, word); // same as calling push_front
    // }
    // print(lst)


    std::vector<int> vec;
    auto iter = vec.begin();
    int number {  };
    while (cin >> number){
        iter = vec.insert(iter, number);
    }

    print(vec);

    /* 
    
    ANSWER: No difference in behaviour but there is an underlying difference on implementation level:


    Per cpp reference:

    For list => No iterators or references are invalidated.

    For vector => If after the operation the new size() is greater than old capacity() 
    a reallocation takes place, in which case all iterators (including the end() iterator) and 
    all references to the elements are invalidated.
    Otherwise, only the iterators and references before the insertion point remain valid.
    

    One then must be cautious to avoid references/iterator invalidation

    */


    return 0;
}
