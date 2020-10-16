https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/578/

---

#### Solution:
```
class Solution(object):
    def containsDuplicate(self, nums):
        from collections import Counter
        counts = Counter(nums)
        return any(i!=1 for i in counts.values())
```
