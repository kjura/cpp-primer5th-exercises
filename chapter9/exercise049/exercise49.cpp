#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <fstream>
#include <cctype>
#include <algorithm>
#include <set>

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

// Exercise 9.49: A letter has an ascender if, as with d or f, part of the letter
// extends above the middle of the line. A letter has a descender if, as with p or
// g, part of the letter extends below the line. Write a program that reads a file
// containing words and reports the longest word that contains neither
// ascenders nor descenders.

template<typename T>
bool is_in(const T& c, const T& val) {
    if (std::find(c.begin(), c.end(), val) != c.end()) {
        return true;
    }
    else {
        return false;
    }
}

bool validate_basic_tokens(const string& t) {


    // Check if white space first
    if(std::isspace(static_cast<unsigned char>(t.front()))) {
            return false;
    }
    else if (t == "-") {
        return false;
    }
    else if (t.empty()) {
        return false;
    }
    else {
        return true;
    }
}


template<typename T>
void print_tokens(vector<T>& s)
{
    for (const auto& e : s ) {
        cout << e << "\n";
    }
}


int main()
{


    
    std::ifstream inf{ "input.txt" };
    if (!inf)
    {
        // Print an error and exit
        std::cerr << "input.txt could not be opened for reading!\n";
        return 1;
    }

    vector<string> tokens {};
    string file_content_input {};
    while (inf >> file_content_input) {
        
        
        if (validate_basic_tokens(file_content_input)) {
            tokens.push_back(file_content_input);
        }
        file_content_input = "";
    }


    // print_tokens(tokens);
    for (auto it { tokens.begin() }; (it != tokens.end()) & !it->empty(); ++it) {
        auto& token { *it };

        vector<char> stop_words {};
        for (auto it_token { token.begin() }; it_token != token.end(); ++it_token) {
            if (*it_token == '.') {
                stop_words.push_back(*it_token);
            }
            else if (*it_token == ';') {
                stop_words.push_back(*it_token);
            }
            else if (*it_token == ',') {
                stop_words.push_back(*it_token);
            }
            else if (*it_token == ';') {
                stop_words.push_back(*it_token);
            }
            else if (*it_token == ':') {
                stop_words.push_back(*it_token);
            }
            else if (*it_token == '?') {
                stop_words.push_back(*it_token);
            }
            else if (*it_token == '!') {
                stop_words.push_back(*it_token);
            }
            else if (*it_token == '"') {
                stop_words.push_back(*it_token);
            }
        }

        for (const auto sw : stop_words) {
            std::replace( token.begin(), token.end(), sw, ' ');
            std::erase(token, ' '); // c++20
        }
        
    }

    // print_tokens(tokens);

    std::set<string> unique_tokens(tokens.cbegin(), tokens.cend());



    return 0;
}
