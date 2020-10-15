class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<string> StringSet;
    
       for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]!='.'){
                    string s(1,board[i][j]);
                    string s1=s+"found in row"+to_string(i);
                    string s2=s+"found in col"+to_string(j);
                    string s3=s+"found in box"+to_string(i/3)+to_string(j/3);
                    if(StringSet.find(s1)!=StringSet.end())
                        return false;
                    if(StringSet.find(s2)!=StringSet.end())
                        return false;
                    if(StringSet.find(s3)!=StringSet.end())
                        return false;
                    
                    StringSet.insert(s1);
                    StringSet.insert(s2);
                    StringSet.insert(s3);
                                        

                }
            }
       }
        return true;
    }
};
     
        
        
