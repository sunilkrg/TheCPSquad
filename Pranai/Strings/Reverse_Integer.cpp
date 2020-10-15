class Solution {
public:
    int reverse(int x) {
        stringstream s;
        s<<x;
        string s1;
        s>>s1;
        vector<char> v(s1.begin(),s1.end());
        for(auto c: v)
            cout<<c;
        return 1; 
    }
};
