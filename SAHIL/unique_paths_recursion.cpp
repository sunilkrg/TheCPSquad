class Solution {
public:
    int count(int m,int n)
    {
        if(n==1 || m==1)
            return 1;
        return count(m-1,n)+count(m,n-1);
    }
    int uniquePaths(int m, int n) {
        int x=count(m,n);
        return x;
    }
};
//it  will give tle