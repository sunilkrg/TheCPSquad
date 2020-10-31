https://leetcode.com/explore/interview/card/top-interview-questions-easy/127/strings/881/


---

#### Solution:

```
class Solution:
    def firstUniqChar(self, s: str) -> int:
        count = collections.Counter(s)
        for i,ch in enumerate(s):
            if count[ch]==1:
                return i
        return -1
```
