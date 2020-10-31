//https://leetcode.com/explore/featured/card/top-interview-questions-easy/96/sorting-and-searching/587/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

         int j=0;
         for(int i=nums1.size()-nums2.size();i<nums1.size();i++){
            nums1[i]=nums2[j++];
            }
        sort(nums1.begin(),nums1.end());
        
    }
};
