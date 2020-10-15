class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int,greater<int>> s;
        for(auto i:nums)
            s.insert(i);
        if(s.size()==nums.size())
            return false;
        else
            return true;
    }
};
