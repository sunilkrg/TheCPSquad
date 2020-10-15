class Solution:
    def isPalindrome(self, s: str) -> bool:
        import re
        s1 = re.sub('[^a-zA-Z0-9]',' ',s)
        s1 = s1.lower()
        s1 = s1.split()
        s1 = ''.join(s1)
        s2 = s1[::-1]
        #print(s1,s2)
        if(s1==s2):
            return True
        else:
            return False
