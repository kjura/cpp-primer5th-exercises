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


int my_square(int x){
    return x * x;
}

void get_word(){
    string some_local_varialbe_in_word = "Hello!";
    cout << some_local_varialbe_in_word << "\n";
}

int my_counter(){
    static int counter {0};
    ++counter;
    return counter;
}

int main()
{

    /* 

    my_square()
    
    parameter == Local variables declared inside the function parameter list.
    Parameters are initialized by the arguments provided in each function call.

    
    */

    /* 
    
    get_word()
    local variable == Variables defined inside a block

    */

    /*
    
    my_counter()

    local static variable/objects == Local objects whose value persists across calls to the
    function. Local static objects that are created and initialized before control
    reaches their use and are destroyed when the program ends.

    */

    // for (int i = 0; i < 4; ++i){
    //     cout << "my_counter has been initalized " << my_counter() << " times\n";
    // }


    return 0;
}
