

#include<bits/stdc++.h>
using namespace std;


int count(vector<int> nums,int n,int last,vector<vector<int>>& t)
{
  if(n==0)
  return 0;

  if(t[n][last]!=-1)
  return t[n][last];

  if(nums[n-1]<last)
  return t[n][last]=max(1+count(nums,n-1,nums[n-1],t),count(nums,n-1,last,t));

  else
  return t[n][last]=count(nums,n-1,last,t);
}

int main()
{
  vector<int> nums={0,8,4,12,2,10,6,14,1,9,5,13,3,11,7,15};
  int x=*max_element(nums.begin(),nums.end());
  vector<vector<int>> t(nums.size()+1,vector<int> (x+2,-1));
  cout<<count(nums,nums.size(),x+1,t);
  return 0;
}