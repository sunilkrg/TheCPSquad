// AUTHOR :- SAYANTAN BANERJEE (IIIT GWALIOR)

// https://leetcode.com/problems/decode-ways/

// Idea :- Start from final position. If that equals 0 set last element DP value as 0. Else 1.

//		   Now second last position check. if number forms valid (1 to 26 inclusive), then set as 1 + last element DP value. 
//		   Else only set last element value.
//		   
//		   Now traverse the whole array from N-3 position to 0. 
//		   dp[i] = 0, if cur position = 0.
//		   dp[i] = dp[i+1] + dp[i+2] , if number forms valid with the next one.
//		   dp[i] = dp[i+1] , number is invalid


class Solution {
public:
    int numDecodings(string s) {
        
        int n = s.length();
        
        vector<int> dp(n, 0);
        
        if(s[n-1] == '0')
            dp[n-1] = 0;
        else
            dp[n-1] = 1;
        
        if(n >= 2){
            int cur = (s[n-2] - 48);
            
            if(cur == 0)
                dp[n-2] = 0;
            else{
                int num = ((s[n-2] - 48) * 10) + s[n-1] - 48;
                if(num >= 1 && num <= 26){
                    dp[n-2] = dp[n-1] + 1;
                }else{
                    dp[n-2] = dp[n-1];
                }   
            }
            
            for(int i = n - 3 ; i >= 0 ; i--){
                int cur = (s[i] - 48);
                if(cur == 0)
                    dp[i] = 0;
                else{
                    int num = ((s[i] - 48) * 10) + s[i+1] - 48;
                    if(num >= 1 && num <= 26){
                        dp[i] = dp[i+1] + dp[i+2];
                    }else{
                        dp[i] = dp[i+1];
                    }   
                }
            }   
        }
        
        return dp[0];
    }
};
