class Solution {
public:
    bool containsDuplicate(vector<int>& nums) 
    {
        int c=0;
        unordered_map<int,int>umap;
        for(int i=0;i<nums.size();i++)
        {
            umap[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(umap[nums[i]]>1)
            {
               c++;
                break;
            }
        }
        if(c>0)
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
};
