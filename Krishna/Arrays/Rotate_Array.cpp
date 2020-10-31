class Solution {
public:
    void rotate(vector<int>& nums, int k)
    {
        int n=nums.size();
        if ((n == 0) || (k <= 0))
            {
                return;
            }
            
            // Make a copy of nums
            vector<int> numsCopy(n);
            for (int i = 0; i < n; i++)
            {
                numsCopy[i] = nums[i];
            }
            
            // Rotate the elements.
            for (int i = 0; i < n; i++)
            {
                nums[(i + k)%n] = numsCopy[i];
            }
    }
};
