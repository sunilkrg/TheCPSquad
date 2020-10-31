
https://leetcode.com/explore/interview/card/top-interview-questions-easy/102/math/878/
---

#### solution:


1.
```
def romanToInt2(self, s):
    dict_ = {
        'I': 1,
        'IV': 4,
        'V': 5,
        'IX': 9,
        'X': 10,
        'XL': 40,
        'L': 50,
        'XC': 90,
        'C': 100,
        'CD': 400,
        'D': 500,
        'CM': 900,
        'M': 1000
    }
    result, i = 0, 0
    while i < len(s):
        try:
            result += dict_[s[i] + s[i + 1]]
            i += 2
        except (KeyError, IndexError):
            result += dict_[s[i]]
            i += 1
    return result
```

2.
```
NumeralMap = (('M',  1000),
              ('CM', 900),
              ('D',  500),
              ('CD', 400),
              ('C',  100),
              ('XC', 90),
              ('L',  50),
              ('XL', 40),
              ('X',  10),
              ('IX', 9),
              ('V',  5),
              ('IV', 4),
              ('I',  1))


class Solution:
    def romanToInt(self, s: str) -> int:

        res = 0
        ind = 0

        for numeral, integer in NumeralMap:
            while s[ind:ind + len(numeral)] == numeral:
                res += integer
                ind += len(numeral)

        return res
```
