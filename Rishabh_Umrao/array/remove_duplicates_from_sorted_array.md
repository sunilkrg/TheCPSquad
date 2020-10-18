https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/727/

---

#### Solution:

```
class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        if not nums:
            return 0

        slow = 0
        fast = 1

        while fast < len(nums):
            if nums[slow] != nums[fast]:
                slow += 1
                nums[slow] = nums[fast]
            fast += 1

        return slow + 1
```
