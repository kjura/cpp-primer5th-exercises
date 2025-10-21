#include <iostream>
#include <vector>
#include <cmath>
#include <string>

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

template <typename T>
void print_vector(const vector<T>& container) {
    for (auto& e : container) {
        cout << e << " " << "\n";
    }
}

template <typename T>
void print_vector_capacity(const vector<T>& container) {
    cout << "Capacity is: " << container.capacity() << "\n";
}

template <typename T>
void print_vector_size(const vector<T>& container) {
    cout << "Size is: " << container.size() << "\n";
}


int main()
{

    // Initalize empty vector
    vector<int> vectorator { };
    // Implementation defined: my machine says Capacity is: 0 | Size is : 0
    print_vector_capacity(vectorator); 
    print_vector_size(vectorator);


    // Add some elements
    for (int i = 0; i < 24; i++) {
        vectorator.push_back(i);
    }
    // my machine says Capacity is: 32 | Size is : 24
    print_vector_capacity(vectorator); 
    print_vector_size(vectorator);

    // Let's increase the capacity of vectorator
    vectorator.reserve(50);
    // my machine says Capacity is: 50 | Size is : 24
    print_vector_capacity(vectorator); 
    print_vector_size(vectorator);


    // Use up the vector's capacity
    while (vectorator.size() != vectorator.capacity()) {
        vectorator.push_back(44);
    }

    // Let's print the vector statistics now:
    // My machine says:
    // Capacity is: 50
    // Size is: 50
    // No reallocation happened
    print_vector_capacity(vectorator); 
    print_vector_size(vectorator);

    // Let's add one element more
    // Capacity is: 100 (is doubled, like in the book)
    // Size is: 50
    vectorator.push_back(13);
    print_vector_capacity(vectorator); 
    print_vector_size(vectorator);


    // Let's ask the memory to return spare space, it might not decide to do that
    vectorator.shrink_to_fit();
    print_vector_capacity(vectorator); 
    print_vector_size(vectorator);

    // My machine: it did return space back, and capacity is again equal to size
    // Capacity is: 51
    // Size is: 51

    return 0;
}
