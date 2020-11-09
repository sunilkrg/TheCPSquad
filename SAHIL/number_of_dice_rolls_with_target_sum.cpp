class Solution {
public:
    int dice(int d,int f,int target,vector<vector<int>>& t)
    {
        if(d==0 && target==0)
            return 1;
        else if(d<=0 || target<=0)
            return 0;
        
        if(t[d][target]!=-1)
            return t[d][target];
        
        int r=0;
        for(int i=1;i<=f;i++)
        {
            r+=dice(d-1,f,target-i,t);
            r%=1000000007;
        }
        return t[d][target]=r;
    }
    int numRollsToTarget(int d, int f, int target) {
        vector<vector<int>> t(d+1,vector<int>(target+1,-1));

        return dice(d,f,target,t);
    }
};
