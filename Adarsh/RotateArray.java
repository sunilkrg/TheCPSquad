class Solution {
    public void rotate(int[] nums, int k) {
        List<Integer> l = new ArrayList<Integer>();
        
        int len = nums.length;
        for(int i = 0; i < len; i++) {
            l.add(nums[i]);
        }
    
        int s = 0;
        while(k > 0) {
            k--;
            s = l.get(l.size()-1);
            l.remove(l.size()-1);
            l.add(0, s);
        }
        
        for(int i = 0; i < len ; i++)
            nums[i] = l.get(i);
    }
}