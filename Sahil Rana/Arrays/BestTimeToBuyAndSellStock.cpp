//https://leetcode.com/explore/featured/card/top-interview-questions-easy/92/array/564/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max=0;
      for(int i=0;i<prices.size()-1;i++){
          if(prices[i]<prices[i+1]){
              max+=prices[i+1]-prices[i];
          }
      }
        return max;
    }
};
