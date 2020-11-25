#include<bits/stdc++.h>
using namespace std;

    int lcs[101][101][101];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
  int p;
  //cout<<"\nenter t\n";
  cin>>p;

  while(p--)
  {
    int a,b,c;
    //cout<<"\nenter the lengths\n";
    cin>>a>>b>>c;
    
    string x,y,z;
   // cout<<"\nenter the strings\n";
    cin>>x>>y>>z;
    
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=b;j++)
        {
            for(int k=1;k<=c;k++)
            {
                if(x[i-1]==y[j-1] && x[i-1]==z[k-1])
                lcs[i][j][k]=1+lcs[i-1][j-1][k-1];
                
                else
                lcs[i][j][k]=max(lcs[i-1][j][k],max(lcs[i][j-1][k],lcs[i][j][k-1]));
            }
        }
    }
    
    cout<<lcs[a][b][c]<<"\n";
  }
  return 0;
}