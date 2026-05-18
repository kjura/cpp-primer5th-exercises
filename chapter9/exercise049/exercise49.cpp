#include <iostream>
#include <utility>
#include <vector>
#include <cmath>
#include <string>
#include <fstream>
#include <cctype>
#include <algorithm>
#include <set>
#include <ranges>

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

const string ASCENDER { "tdblfhk" };
const string DESCENDER { "qypgj" };
const string ASDE { ASCENDER + DESCENDER };

template<typename T>
bool is_in(const T& c, const T& val) {
    if (std::find(c.begin(), c.end(), val) != c.end()) {
        return true;
    }
    else {
        return false;
    }
}

void print_word(const std::pair<size_t, string>& p) {
    cout << "length=" << p.first << " " << "word=" << p.second << "\n";
}


// "bu;k-a.".replace([";", "-", "."], "")
bool validate_basic_tokens(const string& t) {

    if (t.empty()) {
        return false;
    }
    else if(std::isspace(static_cast<unsigned char>(t.front()))) {
            return false;
    }
    else if (t == "-") {
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
    for (auto it { tokens.begin() }; (it != tokens.end()) && !it->empty(); ++it) {
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
            else if (*it_token == '\'') {
                stop_words.push_back(*it_token);
            }
        }

        for (const auto sw : stop_words) {
            std::replace( token.begin(), token.end(), sw, ' ');
            std::erase(token, ' '); // c++20
        }
        
    }


    const std::set<string> unique_tokens(tokens.cbegin(), tokens.cend());
    std::vector<std::pair<size_t, string>> candidates {}; 
    for (auto const& e : unique_tokens) {

        if (e.find_first_of(ASDE) == std::string::npos) {
           
            candidates.push_back(std::pair(e.size(), e));
        
        }

    }

    if (!candidates.size()) {
        cout << "The text contains ascenders or descenders only" << "\n";
        return 0;
    }

    else {
        std::ranges::sort(candidates, [](std::pair<size_t, string> t1, std::pair<size_t, string> t2) { return t1.first > t2.first; });
        print_word(candidates[0]);
        // for (unsigned i { 0 }; i < candidates.size(); ++i) {
        // print_word(candidates[i]);
        // if (i > 5) {
        //     break;
        // }
        return 0;
        
    }
        
    
}
