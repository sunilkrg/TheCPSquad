https://leetcode.com/explore/interview/card/top-interview-questions-easy/127/strings/882/

---

#### Solution:

```
class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        return collections.Counter(s) == collections.Counter(t)

```
