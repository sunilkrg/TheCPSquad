class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n=prices.size();
       
   
         int maxp=0;
        int maxs=0;
       
        for(int i = n- 1; i > 0; i--)
        {
            if(prices[i] > maxs)
            {
                maxs = prices[i];
            }
            if(maxs - prices[i - 1] > maxp)
            {
                maxp = maxs - prices[i - 1];
            }
        }
        return maxp;
        
        
    }
};
