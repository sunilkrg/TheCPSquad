//https://leetcode.com/explore/featured/card/top-interview-questions-easy/92/array/578/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
            
            }
        if(s.size()-nums.size()==0)
        return false;
        else
            return true;
    }
};
