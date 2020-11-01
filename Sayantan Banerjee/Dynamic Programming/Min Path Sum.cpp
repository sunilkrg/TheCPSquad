// AUTHOR :- SAYANTAN BANERJEE

// https://leetcode.com/problems/minimum-path-sum/

// Idea :- First fill the first row and first column.
// Now any grid place is sum of that place and minimum of it's upper place or left place. 


class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        
        for(int i = 1 ; i < grid.size(); i++){
            grid[i][0] += grid[i-1][0];
        }
        
        for(int j = 1 ; j < grid[0].size(); j++){
            grid[0][j] += grid[0][j-1];
        }
        
        for(int i = 1 ; i < grid.size(); i++){
            for(int j = 1 ; j < grid[0].size(); j++){
                grid[i][j] += min(grid[i-1][j] , grid[i][j-1]);
            }
        }
        return grid[grid.size()-1][grid[0].size() - 1];
    }
};
