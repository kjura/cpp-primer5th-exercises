Exercise 5.18: Explain each of the following loops. Correct any problems
you detect.

(a) 
```cpp
do
    int v1, v2;
    cout << "Please enter two numbers to sum:" ;
    if (cin >> v1 >> v2)
        cout << "Sum is: " << v1 + v2 << endl;
while (cin);
```
(b)
```cpp
 do {
    // . . .
} while (int ival = get_response());
```
(c)
```cpp
do {
    int ival = get_response();
} while (ival);
```
