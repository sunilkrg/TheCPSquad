class Solution {
public:
    vector<int> dp;
    int rob(vector<int>& nums,int i=0) {
      if(i>=nums.size())
            return 0;
        if(i==0)
        {
            dp.clear();
            dp.resize(nums.size(),-1);
        }
        if(dp[i]==-1)
            dp[i] = max(nums[i]+rob(nums,i+2),rob(nums,i+1));
        return dp[i];  
    }
};