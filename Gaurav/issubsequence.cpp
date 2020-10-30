class Solution {
public:
    bool isSubsequence(string s, string t) {
        
       int m = t.size(), n = s.size();
        
     bool dp[m+1][n+1];
        
        for(int i = 0; i <= m; i++) {
            for(int j = 0; j <= n; j++) {
                if(i == 0 and j == 0)
                    dp[i][j] = 1;
                else if(i == 0)
                    dp[i][j] = 0;
                else if(j == 0)
                    dp[i][j] = 1;
                
                else if(t[i - 1] == s[j - 1])
                    
                    dp[i][j] = dp[i - 1][j - 1];
                
                else
                    dp[i][j] = dp[i - 1][j];
            }
        }
        return dp[m][n];
    }
};
