class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int l=nums.size();
        int j=0;
        vector<int> vect(l, 0); 
        for(int i=0;i<l;i++){
            if(nums[i]!=0){
                vect[j]=nums[i];
                j++;
            }
        }
        nums= vect;
        
    }
};
