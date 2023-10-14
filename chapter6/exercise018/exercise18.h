#ifndef EXERCISE_18_H
#define EXERCISE_18_H

#include <iostream>
#include <vector>
#include <cmath>
#include <string>


class Matrix       
{
public:          
    int row{}; 
    int column{};
};

bool compare(const Matrix& a, const Matrix& b); // Make it const, we do read-only, no change

std::vector<int>::iterator change_val(int a, std::vector<int>::iterator it);

#endif