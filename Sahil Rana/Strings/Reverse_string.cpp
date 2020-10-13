//https://leetcode.com/explore/featured/card/top-interview-questions-easy/127/strings/879/

class Solution {
public:
    void reverseString(vector<char>& s) {
        if(s.size()==0)
            return;
        reverse(s.begin(),s.end());   
    }
};
