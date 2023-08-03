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

int main()
{

    vector<string> vec = {"Alice", "has", "a", "cat"};

    // Idomatic use of for, go over the container and print every word

    

    for (const auto& word : vec){
        cout << word << " ";
    }
    cout << "\n";

    // Rewritten using while
    unsigned int i {0};
    while (i < vec.size()){
        cout << vec[i] << " ";
        ++i;
    }
    cout << "\n";


    // Idiomatic use of while, abort for the last element
    unsigned int j {0};
    while (j < vec.size()){
        cout << vec[j] << " ";
        ++j;
    }
    cout << "\n";


    // Equivalent code in a for loop

    for(unsigned int k = 0; k < vec.size(); ++k){
        cout << vec[k] << " ";
    }
    cout << "\n";

    // Side note, undefined behaviour (double incrementation inside the body and expression in the for loop head)4
    // Thanks to Chat GPT!
    // vec[k] will try to use 4 to get to an element that does not exist!!! (On iteration 3)
    // for(unsigned int k = 0; k != 3; ++k){
    //     cout << vec[k] << " ";
    //     ++k;
    // }
    // cout << "\n";



    /* I would choose range for loop, I would avoid playing around with index and adjusting it for a loop condition */
    /* But you have to be careful to not invalidate the end iterator by adding elements in the range for */
    /* So maybe while loop doesn't sound that bad? If I had only one loop, I guess that'd be while loop */

    return 0;
}
