class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        if(nums.size()==1)
            return false;
        if(k==0)
        {
            for(int i=0;i<nums.size()-1;i++)
            {
                if(nums[i]==0 && nums[i+1]==0)
                    return true;
            }
            return false;
        }
        
        for(int i=0;i<nums.size()-1;i++)
        {
            int sum=nums[i];
            for(int j=i+1;j<nums.size();j++)
            {
                sum+=nums[j];
                if(sum%k==0)
                {cout<<"\nsum is: "<<sum;
                    return true;
                }   
            }
        }
        return false;
    }
};