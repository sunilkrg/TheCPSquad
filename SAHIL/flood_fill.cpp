class Solution {
public:
    int visit[1001][1001];
    bool isvalid(int x,int y,int c,int n,int m,vector<vector<int>>& image)
    {
        if(x<0 || x>=n || y<0 || y>=m)
            return false;
        if(visit[x][y]==1 || image[x][y]!=c)
            return false;
            return true;
    }
    
void dfs(int x,int y,int c,int n,vector<vector<int>>& image,vector<int> dx,vector<int> dy)
    {
        visit[x][y]=1;
        image[x][y]=n;
        
        for(int i=0;i<dx.size();i++)
        {
            if(isvalid(x+dx[i],y+dy[i],c,image.size(),image[0].size(),image))
                dfs(x+dx[i],y+dy[i],c,n,image,dx,dy);
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        vector<int> dx={-1,0,1,0},dy={0,1,0,-1};
        dfs(sr,sc,image[sr][sc],newColor,image,dx,dy);
        return  image;
    }
};