class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> c(nums.size(),0);
        c[0]=1;
        for(int i=1;i<nums.size();i++)
        {
            bool flag=true;
            int m=1;
            for(int j=0;j<=i-1;j++)
            {
                if(nums[i]>nums[j])
                {
                    flag=false;
                    m=max(m,c[j]);
                }
            }
            if(flag)
                c[i]=1;
            else
                c[i]=m+1;
        }
        for(int i=0;i<c.size();i++)
            cout<<c[i]<<" ";
        return *max_element(c.begin(),c.end());
    }
};