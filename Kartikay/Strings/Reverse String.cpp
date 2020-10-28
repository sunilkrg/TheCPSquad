class Solution {
public:
    void reverseString(vector<char>& s) {
        int l=s.size()-1;
        for(int i=0; i<s.size()/2;i++){
            char ch = s[i];
            s[i]=s[l-i];
            s[l-i]=ch;
        }
    }
};
