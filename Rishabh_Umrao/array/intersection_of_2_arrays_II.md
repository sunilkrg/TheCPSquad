https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/674/

----

#### SOlution:

```
class Solution(object):
    def intersect(self, nums1, nums2):
        from collections import Counter
        intersection = Counter(nums1) & Counter(nums2)
        return list(intersection.elements())
```
