Exercise 2.30: For each of the following declarations indicate whether the object being declared has top-level or low-level const.
```c++
const int v2 = 0;    int v1 = v2;
int *p1 = &v1, &r1 = v1;
const int *p2 = &v2, *const p3 = &i, &r2 = v2;
```
