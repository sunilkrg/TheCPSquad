class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        int maxday=days[days.size()-1];
        vector<int> dp(maxday+10,0);
        int j=0;
        for(int i=1;i<=maxday;i++){
            if(i==days[j]){
                j++;
                int v1=dp[i-1]+costs[0];
                int v2=dp[max(0,i-7)]+costs[1];
                int v3=dp[max(0,i-30)]+costs[2];
                dp[i]=min(v1,min(v2,v3));
            }
            else{
                dp[i]=dp[i-1];
            }
        }
        return dp[maxday];
    }
};