Exercise 9.6: What is wrong with the following program? How might you correct it?

```cpp
list<int> lst1;
list<int>::iterator iter1 = lst1.begin(); 
list<int>::iterator iter2 = lst1.end();
while (iter1 < iter2) /* ... */
```