class Solution {
public:
    string longestPalindrome(string s) {
        int nums[s.size()+1][s.size()+1];
        int i=0,j=0;
        memset(nums,0,sizeof(nums));
        
        for(int gap=0;gap<s.size();gap++)
        {
            for(i=0,j=gap;j<s.size();j++,i++)
            {
                if(gap==0)
                
                    nums[i][j]=1;
                
                else if(gap==1)
                {
                    if(s[i]==s[j])
                        nums[i][j]=1;
                }
                else
                {
                    if(s[i]==s[j] && nums[i+1][j-1]==1)
                        nums[i][j]=1;
                }
            }
        }
        
        int mi=0,mj=0;
        for(int i=0;i<s.size();i++)
        {
            for(int j=0;j<s.size();j++)
            {
                if(j<i)
                    continue;
                else if(nums[i][j]==1)
                {
                    if(j-i+1>mj-mi+1)
                        mi=i,mj=j;
                }
                    
            }
        }
        string r="";
        for(i=mi;i<=mj;i++)
            r+=s[i];
        
        return r;
    }
};