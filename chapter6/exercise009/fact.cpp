#include "Chapter6.h"


int fact(int n){
    int output {1};
    for (; n > 0; --n){
        output *= n;
    }

    return output;
}


