class Solution {
     public int minPathSum(int[][] grid,int i,int j,int[][] dp)
     {
         int rows=grid.length;
        int cols=grid[0].length;
         if(i==rows-1 && j==cols-1)
         {
             return grid[i][j];
         }
         if(dp[i][j]!=-1)
         {
             return dp[i][j];
         }
         int option1=Integer.MAX_VALUE;
          int option2=Integer.MAX_VALUE;
         if(i<rows-1)
         {
             option1=minPathSum(grid,i+1,j,dp);
         }
        if(j<cols-1)
         {
             option2=minPathSum(grid,i,j+1,dp);
         }
         dp[i][j]=grid[i][j]+Math.min(option1,option2);
         return dp[i][j];
         
     }
    
    
    public int minPathSum(int[][] grid) {
        
         int rows=grid.length;
        int cols=grid[0].length;
        int[][] dp=new int[rows][cols];
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<cols;j++)
            {
                dp[i][j]=-1;
            }
        }
        return minPathSum(grid,0,0,dp);
        
    }
}
