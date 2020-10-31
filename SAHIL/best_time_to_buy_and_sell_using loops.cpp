class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()==0)
            return 0;
        vector<int> left(prices.size(),0);
        vector<int> right(prices.size(),INT_MAX);
         
        left[left.size()-1]=prices[prices.size()-1];
        
        for(int i=prices.size()-2;i>=0;i--)
        {
            if(prices[i]>left[i] && prices[i]>left[i+1])
                left[i]=prices[i];
            else
                left[i]=left[i+1];
        }
        cout<<"\nleft array:\n";
        for(int i=0;i<left.size();i++)
            cout<<left[i]<<" ";
        right[0]=prices[0];
        
        for(int i=1;i<right.size();i++)
        {
            if(prices[i]<right[i] && prices[i]<right[i-1])
                right[i]=prices[i];
            else
                right[i]=right[i-1];
        }
        cout<<"\nright array is:\n";
        for(int i=0;i<right.size();i++)
            cout<<right[i]<<" ";
        
        for(int i=0;i<right.size();i++)
            right[i]=left[i]-right[i];
        
        return *max_element(right.begin(),right.end());
    }
};