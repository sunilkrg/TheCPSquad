
#include<bits/stdc++.h>
using namespace std;

int t[1001][1001];
int count(string nums,int i,int j)
{
  if(i==j)
  return 1;

  if(t[i][j]!=-1)
  return t[i][j];

  else if(nums[i]==nums[j])
  return t[i][j]=1+count(nums,i+1,j)+count(nums,i,j-1);

  else
  return t[i][j]=count(nums,i+1,j)+count(nums,i-1,j) - count(nums,i+1,j-1);
}

int main()
{
  string s="aaaa";
  memset(t,-1,sizeof(t));
  cout<<count(s,0,s.size()-1);
  return 0;
}