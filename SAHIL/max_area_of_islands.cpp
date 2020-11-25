class Solution {
public:
    bool isvalid(int x,int y,vector<vector<int>>& visit,vector<vector<int>>& grid)
    {
        if(x<0 || y<0 || x>=grid.size() || y>=grid[0].size())
            return false;
        if(visit[x][y]==1 || grid[x][y]==0)
            return false;
        return true;
    }
    void dfs(int x,int y,vector<vector<int>>& visit,int& c,vector<vector<int>>& grid)
    {
        visit[x][y]=1;
        c++;
        vector<int> dx={-1,0,1,0},dy={0,1,0,-1};
        for(int i=0;i<dx.size();i++)
        {
            if(isvalid(x+dx[i],y+dy[i],visit,grid))
                dfs(x+dx[i],y+dy[i],visit,c,grid);
        }
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        vector<vector<int>> visit(grid.size(),vector<int>(grid[0].size(),0));
        
        int c=0;
        vector<int> p;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                if(visit[i][j]==0 && grid[i][j]==1)
                {
                    dfs(i,j,visit,c,grid);
                    p.push_back(c);
                    c=0;
                }
            }
        }
        if(p.size()==0)
            return 0;
        return *max_element(p.begin(),p.end());
    }
};