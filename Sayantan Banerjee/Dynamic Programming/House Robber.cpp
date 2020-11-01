// AUTHOR :- SAYANTAN BANERJEE

// https://leetcode.com/problems/house-robber/

// Idea :- Calculate Ith robbery by max(nums[i-1] , nums[i] + nums[i-2])


class Solution {
public:

    
    int rob(vector<int>& nums) {
        
        
        // Time O(N) Space O(1)
        
        int n = nums.size();
        if(n == 0){
            return 0;
        }else if(n == 1){
            return nums[0];
        }else if(n == 2){
            return max(nums[0], nums[1]);
        }else{
            int first = nums[0];
            int second = max(nums[0], nums[1]);
            for(int i=2; i<n; i++){
                int temp = max(second , nums[i] + first);
                first = second;
                second = temp;
            }
            return second;
        }
    }
};
