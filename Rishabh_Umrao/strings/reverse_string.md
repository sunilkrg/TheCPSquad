https://leetcode.com/explore/interview/card/top-interview-questions-easy/127/strings/879/

---

#### Solution

```
class Solution:
    def reverseString(self, s: List[str]) -> None:
        left=0
        right = len(s)-1

        while(left<right):
            s[left], s[right] = s[right], s[left]
            left+=1
            right-=1
```
