
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
       if(nums.size() == 0) return 0;
        
		int cur=nums[0];
        
		int ans=cur; 
        
		for(int i=1;i<nums.size();i++)
		{
			cur=max(cur+nums[i],nums[i]);
			ans=max(ans,cur);
		}
        
		return ans;
    }
};
