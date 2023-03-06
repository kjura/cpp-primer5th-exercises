Exercise 4.35: Given the following definitions,

```cpp
char cval;     int ival;    unsigned int ui;
float fval;    double dval;
```

identify the implicit type conversions, if any, taking place:

(a) 
```cpp
cval = 'a' + 3;
```
(b)
```cpp
fval = ui - ival * 1.0;
```
(c) 
```cpp
dval = ui * fval;
```
(d)
```cpp
cval = ival + fval + dval;
```