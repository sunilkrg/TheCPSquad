class Solution {
public:
    int maxSubArray(vector<int>& n) {
        int maxi=0;
        int flag=0;
        int sum=0;
        int temp=n[0];
        for(int i=0;i<n.size();i++){
            sum+=n[i];
            if(sum<=0){
                sum=0;
            }
            if(sum>maxi){
                maxi=sum;
                flag=1;
            }
            if(n[i]>temp){
                temp=n[i];
            }
        }
        if(flag==0){
            maxi=temp;
        }
        return maxi;
    }
};