class Solution {
public:
    int reverse(int x) 
    {
        long long int r,ans=0;
        while(x!=0)
        {
          r=x%10;
          x=x/10;
          ans=ans*10+r;
         }
        if(ans>INT_MAX||ans<INT_MIN)
           {
              return 0;
           }
         else
         {
              return ans;
         }
     
    }
};
