class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int, int> first; 
        vector<int> res;
        for(int i=0;i<nums1.size();i++){
            try{
                first[nums1[i]]+=1;
            }
            catch(exception e){
            first.insert(pair<int, int>(nums1[i], 1)); }
        }
         for(int i=0;i<nums2.size();i++){
             if(first[nums2[i]]>0){
                 first[nums2[i]]-=1;
                 res.push_back(nums2[i]);
             }
        }
        return res;
        
    }
};
