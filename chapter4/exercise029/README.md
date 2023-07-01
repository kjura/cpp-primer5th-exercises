Exercise 4.29: Predict the output of the following code and explain your
reasoning. Now run the program. Is the output what you expected? If not,
figure out why.

```cpp
int x[10];   int *p = x;
cout << sizeof(x)/sizeof(*x) << endl;
cout << sizeof(p)/sizeof(*p) << endl;
```