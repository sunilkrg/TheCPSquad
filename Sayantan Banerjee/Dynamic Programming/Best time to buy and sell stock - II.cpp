// AUTHOR :- SAYANTAN BANERJEE (IIIT GWALIOR)

// https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/

// Idea :- Think it as hill and valley. Final answer is sum of all the hills extremities.

class Solution {
public:
    int maxProfit(vector<int>& A) {
        int smallPtr = 0 , largePtr = 0;
        int sum = 0, temp;
        
        for(int i=0; i< A.size(); i++){
            
            if(i == 0){
                smallPtr = 0;
            }else{
                if(A[i] >= A[i-1]){
                    largePtr = i;
                }else{
                    if(largePtr != smallPtr){
                        temp = A[largePtr] - A[smallPtr];   
                        sum += temp;
                    }
                    
                    smallPtr = i;
                    largePtr = i;
                }
            }
        }
        
        if(largePtr != smallPtr){
            temp = A[largePtr] - A[smallPtr];   
            sum += temp;
        }
        
        return sum;
    }
};

