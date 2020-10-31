https://leetcode.com/explore/interview/card/top-interview-questions-easy/127/strings/880/

---

#### Solution:

```
class Solution:
    def reverse(self, x: int) -> int:
        s = str(x)[::-1]


        try:
            s = int(s)
        except ValueError:
            s = -1 * int(s[:-1])

        cond = -2**31 <= s <= 2**31-1
        return s if cond else 0
```            
