https://leetcode.com/explore/interview/card/top-interview-questions-easy/93/linked-list/553/

---

#### solution:

```
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def deleteNode(self, node):
        node.val = node.next.val
        node.next = node.next.next
```
