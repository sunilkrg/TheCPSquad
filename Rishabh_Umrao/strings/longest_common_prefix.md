https://leetcode.com/explore/interview/card/top-interview-questions-easy/127/strings/887/


---

#### solution:

```
class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        c = 0
        for i in zip(*strs):
            if len(set(i)) ==1:
                c +=1
            else:
                return strs[1][:c]

```
