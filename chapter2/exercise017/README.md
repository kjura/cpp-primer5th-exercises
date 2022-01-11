Exercise 2.17: What does the following code print? <br />
<br />
```c++
int i, &ri = i; 
    
    i = 5; ri = 10; 
    
    std::cout << i << " " << ri << std::endl; // i is 10, ri is 10
    
    return 0;
```
