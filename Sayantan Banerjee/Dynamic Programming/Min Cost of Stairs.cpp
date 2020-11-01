// AUTHOR :- SAYANTAN BANERJEE

// https://leetcode.com/problems/min-cost-climbing-stairs/

// Idea :- Calculate Ith cost by cost[i] + min(cost[i-1] , cost[i-2])


class Solution {
public:
    
    // Time :- O(N) Space :- O(1)
    
    int minCostClimbingStairs(vector<int>& cost) {
        int first = cost[0];
        int second = cost[1];
        
        for(int i = 2 ; i < cost.size(); i++){
            int temp = cost[i] + min(first, second);
            first = second;
            second = temp;
        }
        
        
        return min(first, second);
    }
};
