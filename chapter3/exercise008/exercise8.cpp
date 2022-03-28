#include <algorithm>
#include <string>
#include <iostream>

// g++ -std=c++20 -pedantic -Wall -Wextra -Werror -Wshadow -Wsign-conversion -g PLACEHOLDER.cpp  -o PLACEHOLDER
// g++ -std=c++20 -pedantic -Wall -Wextra -Wsign-conversion -g PLACEHOLDER.cpp -o PLACEHOLDER
// <br />

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
    
    string s1;

    if (s1.empty()){

        cout << "Please provide a string, use only lowercase letters\n";

        cin >> s1;
    }

    

    /* USING WHILE LOOP */
 
  /*string::size_type index = 0;
    if (!s1.empty()){

    while (index < s1.size())
    {
        s1[index] = 'X';
        ++index;
    }

    cout << "Your string is now: " << s1 << endl;
    
    }

    else{
        cout << "Aborting ... The string is empty" << endl;
    } */


    /* USING REGULAR FOR LOOP */


    if (!s1.empty()){

        for (string::size_type index = 0; index < s1.size(); ++index){
            
            s1[index] = 'X';
        }

        cout << "Your string is now: " << s1 << endl;

    }

    else{
        cout << "Aborting ... The string is empty" << endl;
    }


    // Conclusion
    // Range for is quicker, cleaner and provides a better control flow
    // for string iteration

    return 0;
}