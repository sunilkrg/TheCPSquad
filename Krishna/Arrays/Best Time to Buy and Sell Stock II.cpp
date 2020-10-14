class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int i,j,profit=0,flag=0;
    for(i=0;i<prices.size()-1;i++){
        if(prices[i]<prices[i+1]){
            if(flag==0){
                profit-=prices[i];
                flag=1;
            }  
        }
        else{
            if(flag==1){
                profit+=prices[i];
                flag=0;
            }
        }
    }
    if(flag==1)
        profit+=prices[i];
    return profit;
        
    }
};
