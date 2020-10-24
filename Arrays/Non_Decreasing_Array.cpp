class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        if(nums.size()==1)
            return true;
        int flag=1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]){
                if(flag==0)
                    return false;
                flag=0;
                if(i==nums.size()-2)
                    continue;
                if(nums[i+2]>=nums[i] )
                    nums[i+1]=nums[i];
                else
                    nums[i]=nums[i+1];
                if(i>0)
                    i=i-2;
                else
                    i=i-1;
            }
        }
        return true;
    }
};
