class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int x=0;
        for(int i=0;i<nums.size();i++){
            x=nums[i] xor x;
        }
        return x;
    }
};

/**
Time complexity : o(n)
Space complexity: o(1)
**/
