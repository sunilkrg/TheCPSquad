class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
       
        int first = cost[0], second = cost[1], current;
        for(int i=2; i<cost.size(); ++i)
        {
            current = min(first,second)+cost[i];
            first = second;
            second = current;
        }
        return min(first,second);
    }
};
