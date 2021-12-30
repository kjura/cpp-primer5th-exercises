Exercise 1.12: What does the following for loop do? What is the final value of sum?

int sum = 0; <br />
for (int i = -100; i <= 100; ++i)<br />
    sum += i;<br />
<br />
<br />
The following for loop sums up values from -100 to 100 and stores this sum in 'sum' variable. The final value is zero (first there will be a summation of negative integers from -100 to -1, then we are hitting
zero, and after that there will be a summation of positive integers from 1 to 100, if we add everything together we end up with 0).

