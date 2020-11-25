

#include<bits/stdc++.h>
using namespace std;

int price(vector<vector<int>>& grid,int i,int j)
{
  if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size())
  return 0;

  return grid[i][j]+max(price(grid,i-1,j+1),max(price(grid,i,j+1),price(grid,i+1,j+1)));
}

int main()
{
  vector<vector<int>> grid={{10, 33, 13, 15},
                  {22, 21, 04, 1},
                  {5, 0, 2, 3},
                  {0, 6, 14, 2}};

  vector<int> r;
  for(int i=0;i<grid.size();i++)
  {
    for(int j=0;j<grid[i].size();j++)
    {
      int x=price(grid,i,j);
      r.push_back(x);
    }
  }
  cout<<*max_element(r.begin(),r.end());
  return 0;
}