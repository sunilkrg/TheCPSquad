
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> t(1001,vector<int> (1001,INT_MIN));

int count(vector<int> nums,int n,int w)
{
  if(w<0 || n==0)
  return INT_MAX;

  if(w==0)
  return 0;

  if(t[n][w]!=INT_MIN)
  return t[n][w];

  //cout<<"\nnums: "<<nums[n-1]<<" w:"<<w;
  int left=INT_MAX,right=0;
  if(n<=w)
    left=nums[n-1]+count(nums,n,w-n);
  
  right=count(nums,n-1,w);

  return t[n][w]=min(left,right);
}

int main()
{
  vector<int> nums={16,20,16};
  int w=5;

  cout<<count(nums,nums.size(),w);
  return 0;
}