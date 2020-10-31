class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> dic; 
        for(int i=0;i<nums.size();i++){
            dic.insert(pair<int, int>(nums[i],i)); 
        }
        
         // map<int, int>::iterator itr; 
        vector<int> p1;
       for(int i=0;i<nums.size();i++){
           int req=target-nums[i];
            if (dic.find(req) != dic.end() && dic[target-nums[i]]!=i) {
                     p1.push_back(dic[target-nums[i]]);
                        p1.push_back(i);
                        break;
                }
        }
        return p1;
        
    }
    
};
