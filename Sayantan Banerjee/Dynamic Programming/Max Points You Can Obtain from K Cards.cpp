// AUTHOR :- SAYANTAN BANERJEE (IIIT GWALIOR)

// https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards/

// Idea :- From front, add K cards. Now remove recent card and add rightmost card. Repeat k times. Check where it becomes maximum.


class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int sum = 0;
        for(int i = 0 ; i < k ; i++){
            sum += cardPoints[i];
        }
        
        int max = sum;
        int n = cardPoints.size();
        for(int i = 0 ; i < k ; i++){
            sum = sum + cardPoints[n - 1 - i] - cardPoints[k - 1 - i];
            if(sum > max)
                max = sum;
        }
        return max;
    }
};
