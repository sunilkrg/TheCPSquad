class Solution {
    public int uniquePaths(int m, int n,int i,int j,int[][] dp)
    {
        if(i==m-1 && j==n-1)
        {
            return 1;
        }
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        int ans=0;
        if(i<m-1)
        {
            ans+=uniquePaths(m,n,i+1,j,dp);
        }
        if(j<n-1)
        {
            ans+=uniquePaths(m,n,i,j+1,dp);
        }
        dp[i][j]=ans;
        return ans;
        
        
    }
    
    
    public int uniquePaths(int m, int n) {
        int[][] dp=new int[m][n];
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                dp[i][j]=-1;
            }
        }
        return uniquePaths(m,n,0,0,dp);
        
    }
}
