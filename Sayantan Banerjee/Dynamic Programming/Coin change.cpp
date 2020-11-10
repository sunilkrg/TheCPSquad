// AUTHOR :- SAYANTAN BANERJEE (IIIT GWALIOR)

// https://leetcode.com/problems/coin-change/

// Idea :- Build an array from 1 to AMOUNT. Traverse in this array, and also in the coins array, now check that min (coin + dp[amount - coin])


class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        
        if(amount == 0)
            return 0;
        
        vector<int> dp(amount + 1, -1);
        
        for(int i = 0 ; i < coins.size() ; i++){
            if(coins[i] <= amount){
                dp[coins[i]] = 1;
            }
        }
        
        
        
        for(int i = 1 ; i <= amount ; i++){
            if(dp[i] == -1){
                int min = amount + 1;
                
                for(int j = 0 ; j < coins.size() ; j++){
                    int cur = i - coins[j];
                    if(cur >= 0){
                        if(dp[cur] != -1 && min > dp[cur]){
                            min = dp[cur];
                        }
                    }
                }
                
                if(min != amount + 1)
                    dp[i] = min + 1;
                
            }
        }
        
        return dp[amount];
    }
};
