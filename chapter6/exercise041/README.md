Exercise 6.41: Which, if any, of the following calls are illegal? Why? Which,
if any, are legal but unlikely to match the programmer’s intent? Why?

```cpp
char *init(int ht, int wd = 80, char bckgrnd = ' ');
```

(a)
```cpp
init();
```

(b)
```cpp
init(24,10);
```

(c)
```cpp
init(14, '*');
```