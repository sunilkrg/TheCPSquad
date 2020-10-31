class Solution {
public:
    int longestPalindromeSubseq(string s) {
        string p=s;
        reverse(s.begin(),s.end());
        
        int t[p.size()+1][s.size()+1];
        
        memset(t,0,sizeof(t));
        
        for(int i=1;i<=p.size();i++)
        {
            for(int j=1;j<=s.size();j++)
            {
                if(p[i-1]==s[j-1])
                    t[i][j]=1+t[i-1][j-1];
                else
                    t[i][j]=max(t[i-1][j],t[i][j-1]);
            }
        }
        return t[p.size()][s.size()];
    }
};