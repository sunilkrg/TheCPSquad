
#include<bits/stdc++.h>
using namespace std;

vector<int> t(100);

int main()
{
  vector<int> nums={1,2,3,1};
  t[1]=nums[0];
  for(int i=2;i<=nums.size();i++)
  {
    t[i]=max(nums[i-1]+t[i-2],t[i-1]);
  }

  cout<<t[nums.size()];
  return 0;
}