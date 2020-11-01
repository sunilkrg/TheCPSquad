// AUTHOR :- SAYANTAN BANERJEE (IIIT GWALIOR)

https://leetcode.com/problems/climbing-stairs/

// Idea :- Calculate Ith stairs by summing up number of stairs in previous two iteration.


class Solution {
public:
    int climbStairs(int n) {
        if(n == 1 || n == 2)
            return n;
    
        int first = 1;
        int second = 2;
        for(int i=3; i<n+1; i++){
            int temp = first + second;
            first = second;
            second = temp;
        }
        return second;
    }
};
