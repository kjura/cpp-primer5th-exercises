Exercise 6.48: Explain what this loop does and whether it is a good use of
assert:

```cpp
string s;
while (cin >> s && s != sought) { } // empty body
assert(cin);
```