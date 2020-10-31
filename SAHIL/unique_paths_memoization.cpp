class Solution {
public:
    int t[101][101];
    int count(int m,int n)
    {
        if(n==1 || m==1)
            return 1;
        if(t[n][m]!=-1)
            return t[n][m];
        return t[n][m]=count(m-1,n)+count(m,n-1);
    }
    int uniquePaths(int m, int n) {
        memset(t,-1,sizeof(t));
        int x=count(m,n);
        return x;
    }
};