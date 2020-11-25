class Solution {
public:
    int count(vector<vector<int>>& nums,int n,int m,vector<vector<int>>& t)
    {
        if(nums[n-1][m-1]==1)
            return 0;
        if(n==1 && m==1)
            return 1;
        
        if(t[n][m]!=-1)
            return t[n][m];
        
        if(n==1)
            return t[n][m]=count(nums,n,m-1,t);
        if(m==1)
            return t[n][m]=count(nums,n-1,m,t);
        
        return t[n][m]=count(nums,n-1,m,t)+count(nums,n,m-1,t);
    }
    int uniquePathsWithObstacles(vector<vector<int>>& nums)
    {
        if(nums[0][0]==1 || nums[nums.size()-1][nums[0].size()-1]==1)
            return 0;
        
        vector<vector<int>> t(nums.size()+1,vector<int>(nums[0].size()+1,-1));
        return count(nums,nums.size(),nums[0].size(),t);    
    }
};