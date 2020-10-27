class Solution {
public:
    int reverse(int x) {
        
        
        
        long long int res=0;
        while(x!=0){
            res=res*10+(x%10);
            x=x/10;
        }
        
        if(res<INT_MIN || res>INT_MAX)
            return 0;
        else
            return res;
    }
};
