// { Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

int t[101][101];
int  lcs(string s,string p,int n,int m)
{
    if(n==0)
    return m;
    if(m==0)
    return n;
    
    if(t[n][m]!=-1)
    return t[n][m];
    
    if(s[n-1]==p[m-1])
    return t[n][m]=lcs(s,p,n-1,m-1);
    
    else
    return t[n][m]=1+min(lcs(s,p,n-1,m),min(lcs(s,p,n,m-1),lcs(s,p,n-1,m-1)));
}
class Solution
{
	public:
		int editDistance(string s, string p)
		{
		    memset(t,-1,sizeof(t));
		    int x=lcs(s,p,s.size(),p.size());
		    return x;
		}
};

// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	string s, t;
    	cin >> s >> t;
    	Solution ob;
    	int ans = ob.editDistance(s, t);
    	cout << ans <<"\n";
    }
	return 0;
}
  // } Driver Code Ends