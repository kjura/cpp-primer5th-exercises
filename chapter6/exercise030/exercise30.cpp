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

bool str_subrange(const string &str1, const string &str2)
{
    // same sizes: return normal equality test
    if (str1.size() == str2.size()){
        return str1 == str2; // ok: == returns bool
    }

    // find the size of the smaller string; conditional operator, see § 4.7 (p. 151)
    auto size = (str1.size() < str2.size()) ? str1.size() : str2.size();


    // look at each element up to the size of the smaller string
    for (decltype(size) i = 0; i != size; ++i) {
        if (str1[i] != str2[i]){
            return; // error #1: no return value; compiler should detect this error
        }
    }

    // error #2: control might flow off the end of the function without a return
    // the compiler might not detect this error


}



int main()
{

    /*   ERROR MESSAGE FOR THE ABOVE CODE
    
     error: return-statement with no value, in function returning 'bool' [-fpermissive]
   31 |             return;
      |             ^~~~~~
    error: control reaches end of non-void function [-Werror=return-type]
   39 | }
      | ^
    
    */


    /*
    ALSOOOOOOOOOOOOOOOOOOO THIS if no return will be found later on
    
    /home/jakub/Public/cpp-primer5th-exercises/playground/sandbox.cpp:31:1: error: control reaches end of non-void function [-Werror=return-type]
   31 | }
      | ^
    cc1plus: all warnings being treated as errors
    
     */


    str_subrange("Jakub", "JurczakJakubJurczak");


    return 0;
}
