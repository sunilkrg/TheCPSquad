// AUTHOR :- SAYANTAN BANERJEE (IIIT GWALIOR)

// https://leetcode.com/problems/minimum-cost-for-tickets/

// Idea :- Recursively check what is the cost for choosing :
//		 Either this day + remaning days
//		 Or 7 days + remaning days
//		 Or 30 days + remaining days.
//		 
//		 Then return the minimum out of it.

//       Use memorization to reduce computation.


class Solution {
public:
    
    vector<int> days;
    int cost1, cost7, cost30;
    
    vector<int> dp;
    
    int recurse(int cur_pos){
        
        int cur_day = days[cur_pos];
        
        // for this day + remaining
        int oneCost;
        if(cur_pos + 1 == days.size()){
            oneCost = 0;
        }else{
            if(dp[cur_pos + 1] == -1){
                oneCost = recurse(cur_pos + 1);
            }else{
                oneCost = dp[cur_pos + 1];
            }   
        }
        int oneTotalCost = cost1 + oneCost;
        
        
        
        
        // for this 7 days + remaining
        int sevenPos = -1;
        for(int i = cur_pos + 1 ; i < days.size() ; i++){
            if(days[i] - cur_day >= 7){
                sevenPos = i;
                break;
            }
        }
        int sevenCost;
        if(sevenPos == -1){
            sevenCost = 0;
        }else{
            if(dp[sevenPos] == -1){
                sevenCost = recurse(sevenPos);
            }else{
                sevenCost = dp[sevenPos];
            }   
        }
        int sevenTotalCost = cost7 + sevenCost;
        
        
        
        
        // for this 30 days + remaining
        int thirtyPos = -1;
        for(int i = cur_pos + 1 ; i < days.size() ; i++){
            if(days[i] - cur_day >= 30){
                thirtyPos = i;
                break;
            }
        }
        int thirtyCost;
        if(thirtyPos == -1){
            thirtyCost = 0;
        }else{
            if(dp[thirtyPos] == -1){
                thirtyCost = recurse(thirtyPos);
            }else{
                thirtyCost = dp[thirtyPos];
            }
        }
        
        int thirtyTotalCost = cost30 + thirtyCost;
        
        dp[cur_pos] = min(oneTotalCost , min(sevenTotalCost, thirtyTotalCost));
        
        return dp[cur_pos];
    }
    
    
    int mincostTickets(vector<int>& DAYS, vector<int>& costs) {
        dp.clear();
        
        for(int i = 0 ; i < DAYS.size() ; i++)
            dp.push_back(-1);
        
        days = DAYS;
        cost1 = costs[0];
        cost7 = costs[1];
        cost30 = costs[2];
        
        return recurse(0);
    }
};
