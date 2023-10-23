#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <algorithm>

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

void recur(const vector<int>& vec, vector<int>::size_type n){

    // Need to compile with g++ -std=c++20 exercise47.cpp -o exercise47
    // AND NOT with: g++ -std=c++20 exercise47.cpp -o exercise47 -D NDEBUG
    // Because with -D NDEBUG we DEFINE NDEBUG via compiler command
    // And here we use if NOT defined
    #ifndef NDEBUG
    
    cout << "The vector size in function " << __func__ << " thas is run in the file " << __FILE__ " is " << vec.size() << "\n";

    #endif

    
    if (n > 1){
    cout << vec[n - 1] << "\n";
    return recur(vec, (n - 1)); // do not pass one-past-end index, first call n - 1 = size - 1 so no invalidation

    }
    else {
        cout << vec[n - 1] << "\n";
        return;
    }

}

int main()
{
    // cout << "Please provide integers seperated by space to push to the vector ...\n";
    vector<int> container {1, 2, 3, 4, 5};
    std::reverse(container.begin(), container.end());
    recur(container, container.size());


    return 0;
}
