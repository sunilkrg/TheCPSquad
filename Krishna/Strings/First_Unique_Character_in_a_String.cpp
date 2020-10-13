class Solution {
public:
    int firstUniqChar(string s)
    {
        map<char,int> m;
        char val;
        for(char const &c:s){
            m[c]++;
        }
        for(int i=0;i<s.length();i++){
            if(m[s.at(i)]==1){
                return i;
            }    
        }            
        return -1;
    }
};
