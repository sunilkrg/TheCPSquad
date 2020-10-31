https://leetcode.com/explore/interview/card/top-interview-questions-easy/99/others/721/

---

#### solution:

```
class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        stack.append(s[0])

        map_ = {'{':'}', '(':')', '[':']'}

        for i in s[1:]:
            try:
                if i == map_.get(stack[-1]):
                    stack.pop(-1)
                else:
                    stack.append(i)
            except:
                stack.append(i)
        if stack:
            return False
        return True
```            
