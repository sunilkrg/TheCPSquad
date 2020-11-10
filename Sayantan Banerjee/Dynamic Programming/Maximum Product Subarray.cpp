// AUTHOR :- SAYANTAN BANERJEE (IIIT GWALIOR)

// https://leetcode.com/problems/maximum-product-subarray/

// Idea :- At any position, its maximum value can be itself, or -ve multiplied with previous minumum, or +ve multiplied with previous maximum. 
//		   Similarly store minimum value for next computation.


class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        
        if(n == 0){
            return 0;
        }
        
        int mx = nums[0];
        int mn = nums[0];
        
        int ans = mx;
        
        for(int i = 1; i<n; i++){
            int prev_max = mx;
            int prev_min = mn;
            
            mx = max(nums[i], max(nums[i] * prev_max , nums[i] * prev_min));
            mn = min(nums[i], min(nums[i] * prev_max , nums[i] * prev_min));
            
            ans = max(ans, mx);
        }
        return ans;
    }
};
