class Solution {
//     public int rob(int[] nums,int n)
//     {
//         int len=nums.length;
//         if(n==0 || n==1)
//         {
//             return nums[n];
//         }
//         return Math.max(rob(nums,n-1),rob(nums,n-2)+nums[n]);
        
//     }
    
    
    public int rob(int[] nums) {
        if(nums.length==0)
        {
            return 0;
        }
        else if(nums.length==1)
        {
            return nums[0];
        }
        
       int first=nums[0];
       int second=Math.max(nums[0],nums[1]);
        for(int i=2;i<nums.length;i++)
        {
           int val=Math.max(first+nums[i],second);
           first=second;
          second=val;
        }
       return second;
      
    }
}
