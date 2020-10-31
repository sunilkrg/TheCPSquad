https://leetcode.com/explore/interview/card/top-interview-questions-easy/93/linked-list/603/


---

#### solution:


```
class Solution:
    def removeNthFromEnd(self, head, n):
        fast = slow = head
        for _ in range(n):
            fast = fast.next
        if not fast:
            return head.next
        while fast.next:
            fast = fast.next
            slow = slow.next
        slow.next = slow.next.next
        return head
```        
