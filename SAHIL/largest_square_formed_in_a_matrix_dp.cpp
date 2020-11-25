
#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  //cout<<"\nenter t\n";
  cin>>t;

  while(t--)
  {
    int n,m;
   // cout<<"\nenter n and m\n";
    cin>>n>>m;
    
   // cout<<"\nenter the input\n";
    int r[n][m];
    
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<m;j++)
      cin>>r[i][j];
    }

    int p[n+1][m+1];
    memset(p,0,sizeof(p));

    int ans=0;

    for(int i=1;i<=n;i++)
    {
      for(int j=1;j<=m;j++)
      {
        if(r[i-1][j-1]==1)
        {
//here it will be the minimum of up,upleft,left +1 from a cell as a square is formed of equal sides
          p[i][j]=min(p[i-1][j-1],min(p[i-1][j],p[i][j-1]))+1;
          ans=max(ans,p[i][j]);
        }
      }
    }

    cout<<ans<<endl;
  }
  return 0;
}