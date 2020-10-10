// Question Link : https://leetcode.com/problems/count-primes/
/** The sieve of Eratosthenes is one of the most efficient ways to find all primes smaller than n when n is smaller than 10 million or so.**/

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
