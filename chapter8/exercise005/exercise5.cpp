#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <fstream>

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

void print_vector(const std::vector<std::string>& vector_of_lines) {
    for (const auto& e : vector_of_lines) {
        cout << e << "\n";
    }
}


std::vector<std::string> read_file(const std::string& file_name) {
    std::vector<std::string> container_for_lines {};

    std::ofstream file_write{file_name}; // ofstream used to write TO a file

        if (!file_write) {
        std::cerr << "Failure while opening " << file_name << " for writing, returning empty vector..." << "\n";
        return container_for_lines;
    }

    else {

        string user_input_lines {};
        cout << "Provide lines for the file" << endl;
        // cin >> user_input_lines
        // std::getline(cin, user_input_lines)
        
        while (std::getline(cin, user_input_lines)) {
            file_write << user_input_lines << "\n";
        }
        // https://stackoverflow.com/questions/40515135/reading-from-file-right-after-writing-in-it
        // Closing the file makes it right but still have to read about the buffer
        file_write.close(); // Closing before creating ifstream object
        // file_write.flush(); // Also works
        std::ifstream input {file_name}; // ifstream used to READ a file

        if (!input) {
            std::cerr << file_name << " could not be opened for reading. Returning empty vector...\n";
            return container_for_lines;
        }

        else {
            cout << "Lines from your file lie below\n";
            std::string file_content {};
            // input >> file_content ignore whitespace
            // std::getline(input, file_content) keep whitespace
            while (input >> file_content) { // Printing each WORD as a separate element
                container_for_lines.push_back(file_content);
            }
        }
        
    }

    return container_for_lines;

}


int main()
{
    
    auto my_file = read_file("my_great_file.txt");

    if (my_file.empty()) {
        cout << "It's empty!\n";
    }
    else {

        print_vector(my_file);
    }
    

    return 0;
}
