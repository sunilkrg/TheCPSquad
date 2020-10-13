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
