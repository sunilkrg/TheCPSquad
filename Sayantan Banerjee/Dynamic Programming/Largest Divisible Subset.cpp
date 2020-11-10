// AUTHOR :- SAYANTAN BANERJEE (IIIT GWALIOR)

// https://leetcode.com/problems/largest-divisible-subset/

// Idea :- First sort in ascending order. Traverse the loop. 
//         At any point i, check from 0 to i - 1. Which has maximum value and also divisible, add 1 to it and store it in count[i]. 
//		   Also store that position into prev[i], so that at last it can be backtracked and whole divisible subset can be generated.


class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        
        if(nums.size() == 0){
            vector<int> empty;
            return empty;
        }
        
        vector<int> count(nums.size() , 1);
        vector<int> prev(nums.size(), -1);
        
        sort(nums.begin(), nums.end());
        
        for(int i = 1 ; i < nums.size(); i++){
            int max = 0;
            int PREV = -1;
            for(int j = i - 1 ; j >= 0 ; j--){
                if(nums[i] % nums[j] == 0 && count[j] > max){
                    max = count[j];
                    PREV = j;
                }
            }
            prev[i] = PREV;
            count[i] = max + 1;

        }
        
        int max = 1;
        int index = 0;
        for(int i = 0 ; i < count.size() ; i++){
            if(count[i] > max){
                max = count[i];
                index = i;
            }
        }
        
        vector<int> output;
        
        while(index != -1){
           output.insert(output.begin(), nums[index]);
           index = prev[index];
        }
        
        return output;
    }
};
