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

/* 

Working code for file input

    std::vector<std::string> container_for_items {};
    std::ifstream kubus {"file.txt"};
    if (kubus) {
        std::string haha {};
        while (kubus >> haha) {
            container_for_items.push_back(haha);
        }
        
    }
    else {
        std::cerr << "Broken\n";
        return 1;
    }

    print_vector(container_for_items);


*/


void print_vector(const std::vector<std::string>& vector_of_lines) {
    for (const auto& e : vector_of_lines) {
        cout << e << "\n";
    }
}


int main()
{



    std::vector<std::string> container_for_lines {};
    const std::string file_name {"my_file.txt"};

    std::ofstream my_file{file_name}; // ofstream used to write TO a file

    if (!my_file) {
        std::cerr << "Failure while opening my_file " << file_name << "\n";
        return 1;
    }

    else {

        string user_input_lines {};
        cout << "Provide lines for the file" << endl;
        // while (cin >> user_input_lines) {
        //     my_file << user_input_lines << "\n";
        // }
        my_file << "Hejka!\n";
        my_file << "Something!\n";
        // https://stackoverflow.com/questions/40515135/reading-from-file-right-after-writing-in-it
        // Closing the file makes it right but still have to read about the buffer
        //my_file.close(); // Closing before creating ifstream object
        // my_file.flush(); // Also works
        std::ifstream input {file_name}; // ifstream used to READ a file

        if (!input) {
            std::cerr << file_name << " could not be opened for reading\n";
            return 1;
        }

        else {
            cout << "Lines from your file lie below\n";
            std::string file_content {};
            while (input >> file_content) {
                cout << file_content << "\n";
                container_for_lines.push_back(file_content);
            }
        }
        
    }

    if (container_for_lines.empty()) {
        cout << "It's empty!\n";
    }
    else {

        for (auto e : container_for_lines) {
            cout << e << "\n";
        }

    }
    

    return 0;
}
