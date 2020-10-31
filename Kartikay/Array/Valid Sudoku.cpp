class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set <string> stringSet ;
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            if(board[i][j]!='.')
            {
            string s="";
            s+=board[i][j];
            string s1=s+"found in row"+to_string(i);
            string s2=s+"found in col"+to_string(j);
            string s3=s+"found in box"+to_string(i/3)+to_string(j/3);
           if(stringSet.find(s1)!= stringSet.end())
               return false;
           if(stringSet.find(s2)!= stringSet.end())
                return false;
           if(stringSet.find(s3)!= stringSet.end())
                return false;
           stringSet.insert(s1);
           stringSet.insert(s2);
           stringSet.insert(s3);
          }
        }
    }
    return true;
}
};
