#ifndef EXERCISE_44_H
#define EXERCISE_44_H

#include <string>
using std::string;

inline bool isShorter(const string& s1, const string& s2){
    return s1.size() < s2.size();
}

#endif