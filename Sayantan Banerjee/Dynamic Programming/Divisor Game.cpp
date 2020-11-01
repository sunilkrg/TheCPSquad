// AUTHOR :- SAYANTAN BANERJEE (IIIT GWALIOR)

// https://leetcode.com/problems/divisor-game/

// Idea :- If N is odd, then Alice can't win. And vice versa.

class Solution {
public:
    bool divisorGame(int N) {
        if(N&1)
            return false;
        else
            return true;
    }
};
