class Solution {
public:
    int countPrimes(int n) {
        if(n==0 || n==1)
            return 0;
        int a[n+1];
        for(int i=0;i<n+1;i++)
            a[i]=1;
        for(int i=2;i<=sqrt(n);i++){
            if(a[i]==1){
                for(int j=i+i;j<=n;j=j+i)
                    a[j]=0;
            }
        }
        int count=0;
        for(int i=2;i<n;i++){
            if(a[i]==1)
                count++;
        }
        return count;
    }
};
