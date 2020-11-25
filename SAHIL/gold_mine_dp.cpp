

#include<bits/stdc++.h>
using namespace std;

int main()
{
  vector<vector<int>> grid={{10, 33, 13, 15},
                  {22, 21, 04, 1},
                  {5, 0, 2, 3},
                  {0, 6, 14, 2}};

  int t[grid.size()+1][grid[0].size()+1];
  memset(t,0,sizeof(t));

//here we are starting from last col because if we will start from first col then the max value correspoding to a cell in last col will not be added so we have to traverse backward from last col to first col try to do in notebook

  for(int j=grid[0].size()-1;j>=0;j--)
  {
    for(int i=0;i<grid.size();i++)
    {
      int up=0,right=0,down=0;
      if(j+1<grid[0].size())
      {
        if(i-1>=0)
        up=t[i-1][j+1];
        
        if(i+1<grid.size())
        down=t[i+1][j+1];

        right=t[i][j+1];
      }
      t[i][j]=grid[i][j]+max(right,max(up,down));
    }
  }

  for(int i=0;i<grid.size();i++)
  {
    for(int j=0;j<grid[i].size();j++)
    cout<<t[i][j]<<" ";
    cout<<endl;
  }
  return 0;
}