//https://leetcode.com/explore/featured/card/top-interview-questions-easy/92/array/727/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
     int i=0,len=1;
     if(nums.empty())
            return 0;
     else
        { 
         for(i;i<nums.size()-1;i++){
             if (nums[i]!=nums[i+1]){
           
             nums[len]=nums[i+1];
            len++;
         }
        }
     }
        
        return len;
    }
};
