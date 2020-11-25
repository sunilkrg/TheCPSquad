// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


// User function Template for C++

class Solution{
public:
    int cost(vector<vector<int>>& matrix,int i,int j,vector<vector<int>>& t)
    {
        if(i<0 || i>=matrix.size() || j<0 || j>=matrix[0].size())
        return 0;
        
        if(t[i][j]!=-1)
        return t[i][j];
        
        return t[i][j]=matrix[i][j]+max(cost(matrix,i+1,j,t),max(cost(matrix,i+1,j-1,t),cost(matrix,i+1,j+1,t)));
    }
    int maximumPath(int N, vector<vector<int>> matrix)
    {
        int r=0;
        vector<vector<int>> t(matrix.size()+1,vector<int>(matrix[0].size()+1,-1));
        for(int j=0;j<matrix[0].size();j++)
        r=max(r,cost(matrix,0,j,t));
        
        return r;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<vector<int>> Matrix(N, vector<int>(N, 0));
        for(int i = 0;i < N*N;i++)
            cin>>Matrix[(i/N)][i%N];
        
        Solution ob;
        cout<<ob.maximumPath(N, Matrix)<<"\n";
    }
    return 0;
}  // } Driver Code Ends