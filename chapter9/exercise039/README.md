Exercise 9.39: Explain what the following program fragment does:

```cpp
vector<string> svec;
svec.reserve(1024);
string word;
while (cin >> word)
        svec.push_back(word);
svec.resize(svec.size()+svec.size()/2);
```