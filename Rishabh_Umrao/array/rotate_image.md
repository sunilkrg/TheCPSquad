https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/770/


---

#### Solution

```
class Solution:
    def rotate(self, matrix: List[List[int]]) -> None:
        matrix[:] = zip(*matrix[::-1])
            
```
