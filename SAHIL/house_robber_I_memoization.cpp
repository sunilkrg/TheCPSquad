
#include<bits/stdc++.h>
using namespace std;

vector<int> t(100,-1);

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
  vector<int> nums={1,2,3,1};

  cout<<robber(nums,nums.size());
  return 0;
}