

#include<bits/stdc++.h>
using namespace std;


int count(vector<int> nums,int n,int last)
{
  if(n==0)
  return 0;

  int left=0,right=0;
  if(nums[n-1]<last)
  {
  left=1+count(nums,n-1,nums[n-1]);
  right=count(nums,n-1,last);
  return max(left,right);
  }
  else
  return count(nums,n-1,last);
}

int main()
{
  vector<int> nums={0,8,4,12,2,10,6,14,1,9,5,13,3,11,7,15};

  cout<<count(nums,nums.size(),INT_MAX);
  return 0;
}