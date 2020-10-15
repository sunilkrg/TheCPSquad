//https://leetcode.com/explore/featured/card/top-interview-questions-easy/92/array/674/

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> u;
        vector<int> v1;
        for(int i=0;i<nums1.size();i++){
            if(u.find(nums1[i])==u.end())
                u[nums1[i]]=1;
            else
                u[nums1[i]]++;
        
        }
        
         for(int i=0;i<nums2.size();i++){
             if(u.find(nums2[i])!=u.end() && u[nums2[i]]>0){
                 v1.push_back(nums2[i]);
                 u[nums2[i]]--;
                 
             }
         }
        return v1;
    }
};
