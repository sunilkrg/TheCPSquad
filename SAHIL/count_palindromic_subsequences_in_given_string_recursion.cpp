
#include<bits/stdc++.h>
using namespace std;

int count(string nums,int i,int j)
{
  if(i==j)
  return 1;

  else if(nums[i]==nums[j])
  return 1+count(nums,i+1,j)+count(nums,i,j-1);

  else
  return count(nums,i+1,j)+count(nums,i-1,j) - count(nums,i+1,j-1);
}

int main()
{
  string s="aaaa";
  cout<<count(s,0,s.size()-1);
  return 0;
}