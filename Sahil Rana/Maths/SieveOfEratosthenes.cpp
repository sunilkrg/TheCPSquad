// Question Link : https://leetcode.com/problems/count-primes/

class Solution {
public:
    int countPrimes(int n) {
        int c=0;
        vector<bool> a(n+1,true);
        
        for(int i=2;i*i<=n;i++){
            if(a[i]==true){
            for(int j=i+i;j<=n;j+=i)
                a[j]=false;
            }
        }
        for(int i=2;i<n;i++){
            if(a[i]==true) c++;
        }
        return c;
    }
};
