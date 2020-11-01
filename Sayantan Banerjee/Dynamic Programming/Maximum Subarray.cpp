// AUTHOR :- SAYANTAN BANERJEE (IIIT GWALIOR)

// https://leetcode.com/problems/maximum-subarray/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        long long dp_last;
        
        if(nums[0] > 0)
            dp_last = nums[0];
        else
            dp_last = 0;
    
        long long output = nums[0];
        
        for(int i=1 ; i  < nums.size() ; i++){
            
            if(output < 0){
                if(nums[i] > output){
                    output = nums[i];
                    if(nums[i] > 0)
                        dp_last = nums[i];
                }
            }else{
                int temp = nums[i] + dp_last;
                dp_last = temp;
                if(dp_last > output)
                    output = dp_last; 
                if(temp < 0)
                    dp_last = 0;
            }
            
        }
        
        return (long long) output;
    }
};
