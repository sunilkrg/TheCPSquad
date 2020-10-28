class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        vector<vector<int>> trans_vec ( matrix.size() , vector<int> (matrix[0].size()));
        
        for(int i=0;i<matrix.size();i++)
    {
        for(int j=0;j<matrix[i].size();j++)
        {
            trans_vec[j][i]=matrix[i][j];
        }
    }
        
    for(int i=0;i<trans_vec.size();i++)
    {
        for(int j=0;j<trans_vec[i].size()/2;j++)
        {
            int ele=trans_vec[i][j];
            trans_vec[i][j]=trans_vec[i][trans_vec[i].size()-1-j];
            trans_vec[i][trans_vec[i].size()-1-j]=ele;
        }
    }
        
        matrix=trans_vec;
        
    }
};
