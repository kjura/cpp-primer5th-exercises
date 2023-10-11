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
using std::size_t;

/*  

1. Why is "s" a reference to const but "occurs" is a
plain reference? -->  Because we don't modify s, s is just a string from which we
read every letter, the access is read only mode
For occurs --> First of all we want to have access to additional information from a function,
we pack occurs into a reference to update the state of this variable, and second, we modify this
variable (incrementation) so it cannot be const, otherwise it wouldn't be modifiable


2. Why are these parameters references, but the char
parameter c is not?  --> Fundamental types are cheap to pass by value and we don't
need to create a seperate variable holding this value beforehand, we can just pass it over


3. What would happen if we made s a plain reference? --> Nothing bad in this case, but
we should use const refs for values that area read only, as we could unnecessarily modify
our string with unwanted behaviour later on

4. What if we made occurs a reference to const? --> We would get an error (if there is an occurence of 
course), because occurs is modified if we find an occurence (incrementation)

*/

// returns the index of the first occurrence of c in s
// the reference parameter occurs counts how often c occurs
string::size_type find_char(string& s, char c, 
                           string::size_type& occurs)
{

    // WHY DID THEY USE THIS RET HERE?
    auto ret = s.size();   // position of the first occurrence, if any
    occurs = 0;            // set the occurrence count parameter 

    for (decltype(ret) i = 0; i != s.size(); ++i) {
        if (s[i] == c) {
            if (ret == s.size()) { // WHY ARE THEY CHECKING THIS?
                ret = i; // remember the first occurrence of c
            }  
            ++occurs; // increment the occurrence count
         }
	}
    return ret;            // count is returned implicitly in occurs
}


int main()
{

    std::string word = "A";
    decltype(word.size()) occ = 0;
    auto index = find_char(word, 'A', occ);
    cout << "Occurs: " << occ << endl;
    cout << "Index: " << index << endl;

    return 0;
}
