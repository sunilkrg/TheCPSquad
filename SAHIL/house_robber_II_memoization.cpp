
#include<bits/stdc++.h>
using namespace std;

vector<int> t(1000,-1);

int robber(vector<int> nums,int n)
{
  if(n==0)
  return 0;
  if(n==1)
  return nums[n-1];

  if(t[n]!=-1)
  return t[n];

  return t[n]=max(nums[n-1]+robber(nums,n-2),robber(nums,n-1));
}

int main()
{
  vector<int> nums={2,3,2};
  vector<int> first,second;

  for(int i=0;i<nums.size()-1;i++)
  first.push_back(nums[i]);

  for(int i=1;i<nums.size();i++)
  second.push_back(nums[i]);

  int x=robber(first,first.size());
  
  for(int i=0;i<=second.size();i++)
  t[i]=-1;
  
  int y=robber(second,second.size());

  cout<<max(x,y);
  return 0;
}