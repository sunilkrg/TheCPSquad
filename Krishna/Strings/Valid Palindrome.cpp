class Solution {
public:
    bool isPalindrome(string s)
    {
        int l=s.length();
        for(int i=0;i<l;i++)
        s[i]=tolower(s[i]);
        int j=0;
        while(j<l){
            if(!(iswalnum(s[j])))              
                j++;
            else if(!(iswalnum(s[l])))
                l--;
            else if(s[j]==s[l])
                j++,l--;
            else
                return false;
            }        
        return true;
        
    }
};
