class Solution {
public:
    bool isPowerOfThree(int n) 
    {
        int rem;
        bool flag=true;
        if(n==0)
        {
            return false;
        }
        while(n!=1)
        {
           rem=n%3;
           if(rem==0)
           {
               n=n/3;
           }
            else
            {
                flag=false;
                break;
            }
        }
        return flag;
    }
};
