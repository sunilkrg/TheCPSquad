https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/567/

---

#### Solution:

```
class Solution(object):
    def moveZeroes(self, nums):
        cnt=0
        for index, num in enumerate(nums):
            if num==0:
                cnt+=1
        for i in range(len(nums)-1,-1,-1):
            if nums[i]==0:
                nums.pop(i)
        nums.extend([0]*cnt)
```
