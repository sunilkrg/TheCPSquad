class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2)
    {
       unordered_map<int,int> umap;
        vector<int> v1;
        for(int i=0;i<nums1.size();i++){
            if(umap.find(nums1[i])==umap.end())
                umap[nums1[i]]=1;
            else
                umap[nums1[i]]++;
        
        }
        
         for(int i=0;i<nums2.size();i++){
             if(umap.find(nums2[i])!=umap.end() && umap[nums2[i]]>0){
                 v1.push_back(nums2[i]);
                 umap[nums2[i]]--;
                 
             }
         }
        return v1;
        
    }
    
};
