/*
Approach (Space Optimized)
1.Initialization: Initialize three variables a, b, and c to 0, 1, and 0 respectively. These variables represent the number of ways to climb the stairs at the current, previous, and two steps ago, respectively.

2.Iterative Calculation: Use a loop to iterate n times. In each iteration:

  ->Update c to be the sum of a and b.
  ->Update a to the previous value of b.
  ->Update b to the current value of c.

3.Final Result: After the loop, the value of b represents the number of ways to 4..climb the staircase with n steps.

4.Return Result: Return the final value of b as the result of the climbStairs function.

Complexity
Time complexity:
O(n)

Space complexity:
O(1)
*/
class Solution {
public:
    int climbStairs(int n) 
    {
        int x=0;
        int y=1;
        int z=0;
        for(int i=0;i<n;i++)
        {
            z=x+y;
            x=y;
            y=z;
        }
        return y;
    }
};