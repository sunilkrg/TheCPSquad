// AUTHOR :- SAYANTAN BANERJEE (IIIT GWALIOR)

// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

// Idea :- Return the max two extremum difference. Make sure MIN is left to MAX.


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n = prices.size();
        
        if(n <= 1)
            return 0;
        
        int max = -1;
        int currentL = 0;
        int currentR = 0;
        
        for(int i = 1; i < prices.size(); i++){
            if(prices[i-1] > prices[i]){
                int temp = prices[currentR] - prices[currentL];
                if(temp > max)
                    max = temp;
                if(prices[currentL] > prices[i]){
                    currentL = i;
                    currentR = i;
                }
            }else{
                currentR = i;
            }
        }
        int temp = prices[currentR] - prices[currentL];
        if(temp > max)
            max = temp;
        return max;
    }
};
