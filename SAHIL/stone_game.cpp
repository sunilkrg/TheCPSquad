class Solution {
public:
    bool stoneGame(vector<int>& nums) {
        int i=0;
        int j=nums.size()-1;
        
        int a=0,b=0;
        int k=0;
        while(i<=j)
        {
            if(i==j)
            {
                if(k%2==0)
                    a+=nums[i];
                else
                    b+=nums[i];
                break;
            }
            else if(nums[i]>nums[j])
            {
                if(k%2==0)
                    a+=nums[i];
                else
                    b+=nums[i];
                i++;
            }
            else
            {
                if(k%2==0)
                    a+=nums[j];
                else
                    b+=nums[j];
                j--;
            }   
        }
        
        if(a>b)
            return true;
        return false;
    }
};