#include <iostream>
#include <unordered_map>
#include <vector>
#include <cmath>
#include <string>
#include <algorithm>

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
void deb(std::string_view mes, const T s) {
    cout << mes << " " << s << "\n";
}


template<typename T>
void deb_container(std::string_view mes, const T& c) {
    cout << mes << " ";
    for (const auto& e : c) {
        cout << e << " ";
    }
    cout << "\n";
}

template<typename T>
void print_container(const T& c) {
    for (const auto& e : c) {
        cout << e << " ";
    }
    cout << "\n";
}


const std::vector<std::string> MONTHS = {
    "january", "jan",
    "february", "feb",
    "march", "mar",
    "april", "apr",
    "may",
    "june", "jun",
    "july", "jul",
    "august", "aug",
    "september", "sep",
    "october", "oct",
    "november", "nov",
    "december", "dec" 
};

const std::unordered_map<std::string, unsigned> MAPPING_MONTHS = {
    {"january", 1}, {"jan", 1},
    {"february", 2}, {"feb", 2},
    {"march", 3}, {"mar", 3},
    {"april", 4}, {"apr", 4},
    {"may", 5},
    {"june", 6}, {"jun", 6},
    {"july", 7}, {"jul", 7},
    {"august", 8}, {"aug", 8},
    {"september", 9}, {"sep", 9},
    {"october", 10}, {"oct", 10},
    {"november", 11}, {"nov", 11},
    {"december", 12}, {"dec", 12} 
};

string findMonth(const vector<string>& v, const string& s) {

    if (std::find(v.begin(), v.end(), s) == v.end()) {
        return "";
    }
    else {
        return s;
    }

}

vector<unsigned> findLocation(const string& searched, char findIt) {
    vector<unsigned> foundIndices {};
    for (decltype(searched.size()) i {0}; i < searched.size(); ++i) {
        if (searched[i] == findIt) {
            foundIndices.push_back(i);
        }
    }

    return foundIndices;
}


vector<string> split_on_delim(const string& s, const char delim) {
    auto parts = s | std::views::split(delim)
    | std::views::transform([](auto r) {
        return std::string(r.data(), r.size());
    });
    auto vec_split = std::vector(parts.begin(), parts.end());
    return vec_split;
}

unsigned parse_double_digit_month(const string& maybe_m) {
    if (maybe_m[0] == '0') {
        return std::stoul(string() + maybe_m[1]);
    }
    else {
        return std::stoul(maybe_m);
    }
}

enum class Delim {
    slash,
    hyphen,
    comma,
    unknown
};

char get_delimiter(const string& s) {
    if(findLocation(s, '/').size() == 2) {
        return '/';
    }
    else if(findLocation(s, '-').size() == 2) {
        return '-';
    }
    else if(findLocation(s, ',').size() == 1) {
        return ',';
    }
    else {
        return '@'; // unknown symbol
    }
}

bool s_exact_with_substr(const string& s, const string& substr) {
    auto it_sub = substr.begin();
    auto it_s = s.begin();
    while (it_s != s.end()) {
        if ( (it_s != s.end()) && (it_sub != substr.end())) {
            if(*it_s == *it_sub) {
                ++it_sub;
                ++it_s;
            }
            else {
                it_sub = substr.begin();
            }
        }
    }

    if (it_sub == substr.end()) {
        return true;
    }
    else {
        return false;
    }
}


// STRONG ASSUMPTION
// mm-dd-yyyy we are going with the US date format


struct Calendar {

}


int main()
{


    // MM/DD/YYY
    const string s1 {"02/28/996"};
    const string s2 {"1/1/1900"};
    const string s3{"january 10, 2026"}; 

    const auto d1 { Calendar(s1) };
    cout << d1 << "\n";

    const auto d2 { Calendar(s2) };
    cout << d2 << "\n";

    const auto d3 { Calendar(s3) };
    cout << d3 << "\n";


    return 0;
}
