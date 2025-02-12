Exercise 9.22: Assuming iv is a vector of ints, what is wrong with the following
program? How might you correct the problem(s)?

```cpp
vector<int>::iterator iter = iv.begin(),
mid = iv.begin() + iv.size()/2;
while (iter != mid){
    if (*iter == some_val) {
        iv.insert(iter, 2 * some_val);
    }
}
```