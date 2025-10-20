Exercise 9.34: Assuming `vi` is a container of `ints` that includes even and
odd values, predict the behavior of the following loop. After you’ve analyzed
this loop, write a program to test whether your expectations were correct.

```cpp
iter = vi.begin();
while (iter != vi.end())
    if (*iter % 2)
        iter = vi.insert(iter, *iter);
    ++iter;
```