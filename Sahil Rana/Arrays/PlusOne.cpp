//https://leetcode.com/explore/featured/card/top-interview-questions-easy/92/array/559/

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for (int i=digits.size()-1;i>=0;i--){
            digits[i]++;
            if(digits[i]==10)
                digits[i]=0;
            else
                return digits;      
        }
        vector<int> n_digits(digits.size()+1,0);
        n_digits[0]=1;
        return n_digits;
    } 
};
