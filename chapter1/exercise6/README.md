Exercise 1.6: Explain whether the following program fragment is legal.

std::cout << "The sum of " << v1;
               << " and " << v2;
               << " is " << v1 + v2 << std::endl;
               
               
               
               
Not legal: There is an error -> expected primary-expression before ‘<<’ token
How to fix it: remove semicolons, the left-hand operator must be an ostream object.               
               
               
            
