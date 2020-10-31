class Solution {
    public int removeDuplicates(int[] nums) {
        int counter = 0;
        
        for(int i = 0; i < nums.length-1; i++) {
            if(nums[i] != nums[i+1]) {
                counter++;
                nums[counter] = nums[i+1];
            }
        }
        return counter+1;
    }
}