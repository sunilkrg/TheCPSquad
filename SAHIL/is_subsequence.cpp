class Solution {
public:
    bool isSubsequence(string s, string r) {
        int t[r.size()+1][s.size()+1];
        
        memset(t,0,sizeof(t));
        
        for(int i=1;i<=r.size();i++)
        {
            for(int j=1;j<=s.size();j++)
            {
                if(r[i-1]==s[j-1])
                    t[i][j]=1+t[i-1][j-1];
                else
                    t[i][j]=max(t[i-1][j],t[i][j-1]);
            }
        }
        if(t[r.size()][s.size()]==s.size())
            return true;
        return false;
    }
};