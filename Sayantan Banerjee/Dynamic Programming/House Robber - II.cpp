// AUTHOR :- SAYANTAN BANERJEE (IIIT GWALIOR)

// https://leetcode.com/problems/house-robber-ii/

// Idea :- We can't rob house 1 and N together as they are in circle. 
// Thus the idea is to rob either (house 1 to house N-1) OR ( house 2 to house N).
// Calculate these two separately by House Robber technique. Now return the maximum of both of them.

class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 0){
            return 0;
        }else if(n == 1){
            return nums[0];
        }else if(n == 2){
            return max(nums[0], nums[1]);
        }else if(n == 3){
            int mx = max(nums[1], nums[2]);
            return max(nums[0], mx);
        }else{
            int first = nums[0];
            int second = max(nums[0], nums[1]);
            for(int i=2; i<n-1; i++){
                int temp = max(second , nums[i] + first);
                first = second;
                second = temp;
            }
            int firstTry = second;
            
            first = nums[1];
            second = max(nums[1], nums[2]);
            for(int i=3; i<n; i++){
                int temp = max(second , nums[i] + first);
                first = second;
                second = temp;
            }
            int secondTry = second;
            
            return max(firstTry, secondTry);
        }
    }
};
