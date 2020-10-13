//https://leetcode.com/explore/featured/card/top-interview-questions-easy/127/strings/880/

class Solution {
public:
    int reverse(int x) {
        long long int rev=0;
        while(x!=0){
            rev=rev*10+(x%10);
            
            x/=10;
        }
        if(rev<INT_MIN || rev>INT_MAX)
            return 0;
        return rev;
    }
};
