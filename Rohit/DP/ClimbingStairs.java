class Solution {
    public int climbStairs(int n,int[] dp)
    {
         if(n==0 || n==1)
        {
            return 1;
        }
        if(dp[n]!=-1)
        {
           return dp[n]; 
        }
        int ans=0;
        if(n-1>=0)
        {
            ans+=climbStairs(n-1,dp);
        }
        if(n-2>=0)
        {
            ans+=climbStairs(n-2,dp);
        }
        dp[n]=ans;
        return ans;
    }
    
    
    
    public int climbStairs(int n) {
        if(n==0)
        {
            return 0;
        }
        int[] dp=new int[n+1];
        Arrays.fill(dp,-1);
        return climbStairs(n,dp);
       
    }
}
