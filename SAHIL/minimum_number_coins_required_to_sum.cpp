

#include<bits/stdc++.h>
using namespace std;


int  main()
{
  vector<int> nums={9,6,5,1};
  int sum=11;
  int t[nums.size()+1][sum+1];
  
  for(int i=0;i<=sum;i++)
  t[0][i]=INT_MAX-1;

  for(int i=1;i<=nums.size();i++)
  t[i][0]=0;

  for(int i=1;i<=sum;i++)
  {
    if(i%nums[0]==0)
    t[1][i]=i/nums[0];

    else
    t[1][i]=INT_MAX-1;
  }

  for(int i=2;i<=nums.size();i++)
  {
    for(int j=1;j<=sum;j++)
    {
      if(nums[i-1]<=j)
      t[i][j]=min(1+t[i][j-nums[i-1]],t[i-1][j]);

      else
      t[i][j]=t[i-1][j];
    }
  }

  int m=INT_MAX;
  for(int i=0;i<=nums.size();i++)
  m=min(t[i][sum],m);

  cout<<"\nminimum is: "<<m;

  return 0;
}