class Solution {
public:
    int count(vector<vector<int>> t,int n,int m)
{
  if(n==1 && m==1)
  return t[n-1][m-1];

  if(n==1)
  return t[0][m-1]+count(t,1,m-1);

  if(m==1)
  return t[n-1][0]+count(t,n-1,1);


  return t[n-1][m-1]+min(count(t,n-1,m),count(t,n,m-1));
}
    int minPathSum(vector<vector<int>>& grid) {
        
        return count(grid,grid.size(),grid[0].size());
        
    }
};
//it will give tle