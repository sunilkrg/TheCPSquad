// AUTHOR :- SAYANTAN BANERJEE (IIIT GWALIOR)

// https://leetcode.com/problems/is-subsequence/

// Idea :- Used Two pointers for this problem.

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int a = 0;
        for(int i=0 ; i < t.size() ; i++){
            if(a == s.size())
                return true;
            if(t[i] == s[a])
                a++;
        }
        if(a == s.size())
                return true;
        return false;
    }
};
