https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/549/
---

#### Solution:

```
class Solution(object):
    def singleNumber(self, nums):
        from collections import Counter
        counts = Counter(nums)
        for k,v in counts.items():
            if v == 1:
                return k
```
