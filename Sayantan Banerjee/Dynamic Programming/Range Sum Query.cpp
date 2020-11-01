// AUTHOR :- SAYANTAN BANERJEE (IIIT GWALIOR)

// https://leetcode.com/problems/range-sum-query-immutable/

// Idea :- Used Prefix Sum to solve this problem.


class NumArray {
public:
    
    vector<int> prefixSum;
    
    NumArray(vector<int>& nums) {
        prefixSum = nums;
        for(int i = 1 ; i < prefixSum.size() ; i++){
            prefixSum[i] += prefixSum[i-1];
        }
    }
    
    int sumRange(int i, int j) {
        if(i == 0)
            return prefixSum[j];
        else
            return prefixSum[j] - prefixSum[i-1];
    }
};
