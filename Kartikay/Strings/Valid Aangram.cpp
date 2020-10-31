class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.size()!=t.size()){
            return false;
        }
        
        else{
            unordered_map <char, int> sm ;
            for (int i=0;i<s.size();i++){
                sm[s[i]]++;
                sm[t[i]]--;
            }
            
             for(auto x: sm){
                 if(x.second!=0)
                     return false;
             }
            return true;
            
        }
        
    }
};
