// AUTHOR :- SAYANTAN BANERJEE (IIIT GWALIOR)

// https://leetcode.com/problems/continuous-subarray-sum/

// If k = 0, check for consecutive two 0. IF yes, return TRUE.
// For k != 0,
// traverse array, calculate prefix sum with applying modulo and put map[cur_prefix_sum] = cur_index.
// If anywhere cur_prefix_sum value is present in map previously, check if indices distance > 1. If yes, return TRUE.
// After full traversal if it doesn't match, return FALSE.


class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        
        if(k == 0){
            for(int i = 1 ; i < nums.size() ; i++){
                if(nums[i] == 0 && nums[i-1] == 0){
                    return true;
                }
            }
            return false;
        }
        
        unordered_map<int,int> mp;
        int sum = 0;
        
        mp[0] = -1;
        
        for(int i = 0 ; i < nums.size() ; i++){
            sum += nums[i];
            sum = sum % k;
            if(mp.count(sum) == 1){
                int val = i - mp[sum];
                if(val > 1){
                    return true;
                }
            }else{
                mp[sum] = i;
            }
        }
        
        return false;
    }
};
