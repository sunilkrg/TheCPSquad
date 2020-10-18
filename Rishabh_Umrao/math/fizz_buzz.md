https://leetcode.com/explore/interview/card/top-interview-questions-easy/102/math/743/

---

#### Solution:

```
class Solution:
    def fizzBuzz(self, n: int) -> List[str]:
        ret = []

        for i in range(1,n+1):
            ans = ''
            if i%3==0:
                ans += "Fizz"
            if i%5==0:
                ans += "Buzz"
            if not ans:
                ans = str(i)
            ret.append(ans)
        return ret
```
