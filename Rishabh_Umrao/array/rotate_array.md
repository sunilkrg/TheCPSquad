https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/646/

---

#### solution:

class Solution(object):
    def rotate(self, nums, k):
        k %= len(nums)
        nums[:] = nums[-k:] + nums[:-k]
