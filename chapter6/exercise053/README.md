Exercise 6.53: Explain the effect of the second declaration in each one of the following
sets of declarations. Indicate which, if any, are illegal.

(a)
```cpp
int calc(int&, int&);
int calc(const int&, const int&);
```

(b)
```cpp
int calc(char*, char*);
int calc(const char*, const char*);
```

(c)
```cpp
int calc(char*, char*);
int calc(char* const, char* const);
```