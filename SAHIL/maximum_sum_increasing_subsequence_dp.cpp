

#include<bits/stdc++.h>
using namespace std;


int main()
{
  vector<int> nums={10,22,9,33,21,50,41,60,80,3};
  vector<int> c(nums.size(),0);

  c[0]=nums[0];

  for(int i=1;i<nums.size();i++)
  {
    int m=0;
    bool flag=true;
    for(int j=0;j<=i-1;j++)
    {
      if(nums[i]>nums[j])
      {
        flag=false;
        m=max(c[j],m);
      }
    }
    if(flag)
    c[i]=nums[i];
    else
    c[i]=m+nums[i];
  }

  for(int i=0;i<c.size();i++)
  cout<<c[i]<<" ";
return 0;
}