//https://leetcode.com/explore/featured/card/top-interview-questions-easy/92/array/546/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        vector<int>v;
        m[nums[0]]=0;
        for(int i=1;i<nums.size();i++){
            int key = target-nums[i];
            if(m.find(key)!=m.end()){
                 auto it = m.find(key);
                 v.push_back(i);
                 v.push_back(it->second);
                 return v;
              }
            else
                m[nums[i]]=i;
            
        }
         v.insert(v.begin(), 2, -1); 
        return v;
        
    }
};
