// AUTHOR :- SAYANTAN BANERJEE (IIIT GWALIOR)

// https://leetcode.com/problems/longest-increasing-subsequence/

// Idea :- Traverse the loop. at any point i, check from 0 to i - 1. Which has maximum value, add 1 to it and store it in dp[i].
//		   At last return the maximum value in the dp[] array.


class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        
        if(nums.size() == 0)
            return 0;
        
        vector<int> dp(nums.size() , 1);
        dp[0] = 1;
        
        for(int i = 1 ; i < nums.size() ; i++){
            int mx = 1;
            for(int j = i - 1 ; j >= 0 ; j--){
                if(nums[j] < nums[i] && mx < dp[j] + 1){
                    mx = dp[j] + 1;
                }
            }
            dp[i] = mx;
        }
        
        return *max_element(dp.begin(), dp.end());
    }
};
