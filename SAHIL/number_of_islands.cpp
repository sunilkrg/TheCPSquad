class Solution {
public:
    bool isvalid(int x,int y,vector<vector<int>>& visit,vector<vector<char>>& grid)
    {   
        if(x<0 || y<0 || x>=grid.size() || y>=grid[0].size())
        {
            return false;
        }
         if(visit[x][y]==1 || grid[x][y]=='0')
         {
             return false;}
        return true;
    }
    void dfs(int x,int y,vector<vector<int>>& visit,vector<vector<char>>& grid)
    {   
        visit[x][y]=1;
        vector<int> dx={-1,0,1,0},dy={0,1,0,-1};
        for(int i=0;i<dx.size();i++)
        {
            if(isvalid(x+dx[i],y+dy[i],visit,grid)==true)
                dfs(x+dx[i],y+dy[i],visit,grid);
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        vector<vector<int>> visit(grid.size(),vector<int>(grid[0].size(),0));
        
        int cc=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                if(grid[i][j]=='0')
                    continue;
                else if(grid[i][j]=='1' && visit[i][j]==0)
                {
                   // cout<<"\nx: "<<i<<" y: "<<j;
                    cc++,dfs(i,j,visit,grid);
                }
            }
        }
        return cc;
    }
};