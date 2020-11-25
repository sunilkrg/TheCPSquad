

#include<bits/stdc++.h>
using namespace std;

int t[1001][1001];

int price(vector<vector<int>>& grid,int i,int j)
{
  if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size())
  return 0;

  if(t[i][j]!=-1)
  return t[i][j];

  return t[i][j]=grid[i][j]+max(price(grid,i-1,j+1),max(price(grid,i,j+1),price(grid,i+1,j+1)));
}

int main()
{
  vector<vector<int>> grid={{10, 33, 13, 15},
                  {22, 21, 04, 1},
                  {5, 0, 2, 3},
                  {0, 6, 14, 2}};

  int r=0;
  for(int i=0;i<grid.size();i++)
  {
    for(int j=0;j<grid[i].size();j++)
    {
      memset(t,-1,sizeof(t));
      int x=price(grid,i,j);
      r=max(r,x);
    }
  }

  cout<<r;
  return 0;
}