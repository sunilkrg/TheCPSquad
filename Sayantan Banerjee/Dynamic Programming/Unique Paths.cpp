// AUTHOR :- SAYANTAN BANERJEE (IIIT GWALIOR)

// https://leetcode.com/problems/unique-paths/

// Idea :- First fill first row and first column with 1. 
// Then any grid place is made by sum of it's left place or it's upper place


class Solution {
public:
    int uniquePaths(int m, int n) {
        int dp[m][n];
        
        for(int i = 0 ; i < m ; i++){
            dp[i][0] = 1;
        }
        
        for(int i = 0 ; i < n ; i++){
            dp[0][i] = 1;
        }
        
        for(int i = 1 ; i < m ; i++){
            for(int j = 1 ; j < n ; j++){
                dp[i][j] = dp[i-1][j] + dp[i][j-1];
            }
        }
        
        return dp[m-1][n-1];
    }
};
