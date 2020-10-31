
#include<bits/stdc++.h>
using namespace std;

vector<int> t1(1000);
vector<int> t2(1000);

int main()
{
  vector<int> nums={2,3,2};
  vector<int> first,second;

  for(int i=0;i<nums.size()-1;i++)
  first.push_back(nums[i]);

  for(int i=1;i<nums.size();i++)
  second.push_back(nums[i]);

  t1[1]=first[0];
  for(int i=2;i<=first.size();i++)
  {
    t1[i]=max(first[i-1]+t1[i-2],t1[i-1]);
  }
  
  t2[1]=second[0];
  for(int i=2;i<=second.size();i++)
  {
    t2[i]=max(second[i-1]+t2[i-2],t2[i-1]);
  }

  cout<<max(t1[first.size()],t2[second.size()]);
  return 0;
}