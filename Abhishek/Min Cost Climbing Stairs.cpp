class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int dp[cost.size()];
        dp[cost.size()-1] = cost[cost.size()-1];
        dp[cost.size()-2] = cost[cost.size()-2];
        for(int i = cost.size()-3;i>=0;i--){
            dp[i] = cost[i] + min(dp[i+1], dp[i+2]);
        }
        return min(dp[0], dp[1]);
    }
};