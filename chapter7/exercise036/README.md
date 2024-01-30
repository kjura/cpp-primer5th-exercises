Exercise 7.36: The following initializer is in error. Identify and fix the problem.
```cpp
struct X {
X (int i, int j): base(i), rem(base % j) { }
int rem, base;
};
```