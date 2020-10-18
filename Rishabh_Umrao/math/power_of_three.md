https://leetcode.com/explore/interview/card/top-interview-questions-easy/102/math/745/

---

#### solution:

```
class Solution:
    def isPowerOfThree(self, n: int) -> bool:
        return n > 0 and 1162261467 % n == 0
```        
