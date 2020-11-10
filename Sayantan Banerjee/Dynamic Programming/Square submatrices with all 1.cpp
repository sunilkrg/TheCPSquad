// AUTHOR :- SAYANTAN BANERJEE (IIIT GWALIOR)

// https://leetcode.com/problems/count-square-submatrices-with-all-ones/

// Idea :- First row and first column is copied as usual.
//		   For next lines, we took the minimum of the 3 position ,i.e, Up, Left, Corner. And added 1 to it.
//		   After completion of this table, add all the numbers to throw the output.


class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        vector<vector<int>> dp(matrix.size(), vector<int> (matrix[0].size() , 0));
        
        for(int i = 0 ; i < matrix.size() ; i++){
            dp[i][0] = matrix[i][0];
        }
        
        for(int i = 0 ; i < matrix[0].size() ; i++){
            dp[0][i] = matrix[0][i];
        }
        
        
        for(int i = 1 ; i < matrix.size() ; i++){
            for(int j = 1 ; j < matrix[0].size() ; j++){
                int mn = min(dp[i-1][j-1] , min(dp[i-1][j] , dp[i][j-1]));
                if(matrix[i][j] == 0)
                    dp[i][j] = 0;
                else
                    dp[i][j] = mn + 1;
            }
        }
        
        int total = 0;
        
        for(int i = 0 ; i < matrix.size() ; i++){
            for(int j = 0 ; j < matrix[0].size() ; j++){
                total += dp[i][j];
            }
        }
        
        return total;
    }
};
