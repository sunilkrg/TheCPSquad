class Solution {
public:
    int maxProfit(vector<int>& p) {
        if(p.size()<=1){
            return 0;
        }
        int mini=p[0];
        int maxi=p[1];
        int ans=max(0,maxi-mini);        
        for(int i=1;i<p.size();i++){
            if(mini>p[i]){
                mini=p[i];
                maxi=0;
            }
            else{
                if(maxi<p[i]){
                    maxi=p[i];
                    ans=max(ans,maxi-mini);
                }
            }
        }
        return max(0,ans);
    }
};