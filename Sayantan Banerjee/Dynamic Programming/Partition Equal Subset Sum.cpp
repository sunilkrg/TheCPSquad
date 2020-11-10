// AUTHOR :- SAYANTAN BANERJEE (IIIT GWALIOR)

// https://leetcode.com/problems/partition-equal-subset-sum/

// Idea :-   We know we have to divide in 2 subset. Now total SUM of array must be even, as odd sum can't be divided into two.
//           Each subset_sum = Total Sum / 2.
//           Now make a DP 2-D table , where rows are ith value of NUMS executed and column from 1 to subset_sum.
//           Now for first row, place 1 where amount can be reached.
//           For all other rows, check its previous row. Where value = 1, put that place = 1 and also (that place + current num ) = 1 when within bound.


class Solution {
public:
    bool canPartition(vector<int>& nums) {
        
        int sum = 0;
        
        for(int i = 0 ; i < nums.size() ; i++){
            sum += nums[i];
        }
        
        if(sum % 2 != 0)
            return false;
        
        int subSum = sum / 2;
        
        vector<int> dp(subSum + 1, 0);
        
        vector<int> cur(subSum + 1, 0);
        
        for(int i = 0 ; i < nums.size() ; i++){
            
            if(nums[i] <= subSum)
                cur[nums[i]] = 1;
            
            for(int j = 1 ; j <= subSum ; j++){
                if(dp[j] == 1){
                    cur[j] = 1;
                    if(j + nums[i] <= subSum)
                        cur[j + nums[i]] = 1;
                }
            }
            
            dp = cur;
            if(dp[subSum] == 1)
                return true;
        }
        
        return false;
    }
};
