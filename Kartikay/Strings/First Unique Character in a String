class Solution {
public:
    int firstUniqChar(string s) {
    ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    vector<int> frequency(26,0);    
    for(int i=0;s[i]!='\0';i++)
        frequency[s[i]-'a']++;
    for(int i=0;s[i]!='\0';i++)
        if(frequency[s[i]-'a']==1)
           return i;
         
         return -1;
    }
    
};
