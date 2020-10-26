class Solution {
    public boolean containsDuplicate(int[] nums) {
        Map<Integer, Integer> m = new HashMap<Integer, Integer>();
        
        for(int i = 0; i < nums.length; i++) {
            if(m.get(nums[i]) != null)
                return true;
            else {
                m.put(nums[i], i);
            }
        }
        
        return false;
    }
}