https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/546/

---

#### Solution:

```
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        s = set()
        for i in range(len(nums)):
            if target-nums[i] in s:
                return [i,nums.index(target-nums[i])]
            else:
                s.add(nums[i])

```
