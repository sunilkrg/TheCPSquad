class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        
        vector<vector<int>> t(matrix.size()+1,vector<int>(matrix[0].size()+1,0));
        
        int sum=0;
        for(int i=1;i<=matrix.size();i++)
        {
            for(int j=1;j<=matrix[0].size();j++)
            {
                if(matrix[i-1][j-1]==0)
                    t[i][j]=0;
                else
                {
                t[i][j]=min(t[i-1][j],min(t[i][j-1],t[i-1][j-1])) + 1;
                sum+=t[i][j];
                }
            }
        }
        
        return sum;
    }
};