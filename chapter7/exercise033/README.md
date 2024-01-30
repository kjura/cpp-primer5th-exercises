Exercise 7.33: What would happen if we gave Screen a size member defined as
follows? Fix any problems you identify.
```cpp
pos Screen::size() const
{
return height * width;
}
```