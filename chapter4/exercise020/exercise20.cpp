#include <iostream>
#include <vector>
#include <cmath>
#include <string>
 
// g++ -std=c++20 -pedantic -Wall -Wextra -Werror -Wshadow -Wsign-conversion -g sandbox.cpp  -o sandbox
// g++ -std=c++20 -pedantic -Wall -Wextra -Wsign-conversion -g sandbox.cpp -o sandbox
// <br />
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{

 
    // (a) *iter++; =============> LEGAL, increment iterator by one, dereference unchanged copy

    // (b) (*iter)++; =============> ILLEGAL, dereference iterator, return string and try to increment this string

    // (c) *iter.empty() =============> ILLEGAL, iterator does not have an empty member named empty

    // (d) iter->empty() <=> (*iter).empty(); =============> LEGAL, dereference the iterator and check if a string is empty

    // (e) ++*iter; =============> ILLEGAL, dereference and then try to increment a string

    // (f) iter++->empty(); <=>  =============> LEGAL, post-increment, yield the unincremented value, dereference
    // this value and check if a string is empty



    return 0;
}
