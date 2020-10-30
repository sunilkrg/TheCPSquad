class Solution {
public:
    int memo[100]={0};
    int climbStairs(int n) {
        return climb_Stairs(0, n);
    }
    int climb_Stairs(int i, int n) {
        if (i > n) {
            return 0;
        }
        if (i == n) {
            return 1;
        }
        if (memo[i] > 0) {
            return memo[i];
        }
        memo[i] = climb_Stairs(i + 1, n) + climb_Stairs(i + 2, n);
        return memo[i];
    }
};