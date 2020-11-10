// AUTHOR :- SAYANTAN BANERJEE (IIIT GWALIOR)

// https://leetcode.com/problems/number-of-dice-rolls-with-target-sum/

// Idea :- Recursively solve for (DICE - 1, SUM_REMAINING) over all faces of current dice. To avoid repeated computation, do memorization.


#define ll long long
const ll mod = 1000000007;
inline ll add(ll a,ll b) {return ((a%mod)+(b%mod))%mod;}

class Solution {
public:
    
    int faces;
    
    int recurse(int diceLeft, int targetLeft , vector<vector<int>> &dp){
        if(diceLeft == 0 && targetLeft == 0)
            return 1;
        else if(diceLeft <= 0 || targetLeft <= 0){
            return 0;
        }else if(dp[diceLeft][targetLeft] != -1){
            return dp[diceLeft][targetLeft];
        }
        
        ll totalCur = 0;
        
        for(int i = 1 ; i <= faces ; i++){
            ll val = recurse(diceLeft - 1 , targetLeft - i , dp);
            totalCur = add(totalCur, val);
        }
        
        return dp[diceLeft][targetLeft] = totalCur;
    }
    
    int numRollsToTarget(int d, int f, int target) {
        faces = f;
        vector<vector<int>> dp( d + 1 , vector<int> (target + 1, -1)); 
        ll ans = recurse(d,target , dp);
        
        return (ll) ans;
    }
};
