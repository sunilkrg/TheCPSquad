class Solution {
public:
    int minDistance(string word1, string word2) {
        int t[word1.size()+1][word2.size()+1];
        for(int i=0;i<=word1.size();i++)
        {
            for(int j=0;j<=word2.size();j++)
                t[i][j]=0;
        }
        for(int i=1;i<=word1.size();i++)
        {
            for(int j=1;j<=word2.size();j++)
            {
                if(word1[i-1]==word2[j-1])
                    t[i][j]=1+t[i-1][j-1];
                else
                    t[i][j]=max(t[i-1][j],t[i][j-1]);
            }
        }
        int x=t[word1.size()][word2.size()];
        return word1.size()+word2.size()-2*x;
    }
};