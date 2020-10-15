class Solution {
public:
    void rotate(vector<vector<int>>& matrix) 
    {
         int temp=0;
        for(int i=0;i<matrix.size();i++){
            for(int j=i+1;j<matrix.size();j++){
               swap(matrix[i][j],matrix[j][i]);
            }
        }
        int a=0,b=matrix.size()-1;
        
        while(a!=b && a<b){
             for(int i=0;i<matrix.size();i++)
                 swap(matrix[i][a],matrix[i][b]);
            a++;
            b--;
                 }
    }
};
