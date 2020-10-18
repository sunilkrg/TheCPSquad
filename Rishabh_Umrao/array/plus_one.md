https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/559/

---

#### Solution:

```
class Solution(object):
    def plusOne(self, digits):
        if digits[-1] != 9:
            return digits[0:-1] + [digits[-1]+1]

        if len(digits)<2:
            digits = [0] + digits
        return self.plusOne(digits[0:-1]) + [0]
```
