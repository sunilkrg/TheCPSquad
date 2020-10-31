class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int t[grid.size()+1][grid[0].size()+1];
        
        for(int i=1;i<=grid.size();i++)
        {
            for(int j=1;j<=grid[0].size();j++)
            {
                if(i==1 && j==1)
                    t[i][j]=grid[0][0];
                else if(i==1)
                    t[i][j]=grid[0][j-1]+t[i][j-1];
                else if(j==1)
                    t[i][j]=grid[i-1][0]+t[i-1][j];
                else
                    t[i][j]=grid[i-1][j-1]+min(t[i-1][j],t[i][j-1]);
            }
        }
        return t[grid.size()][grid[0].size()];
    }
};