class Solution {
public:
    void dfs(int n,vector<vector<int>>& nums,vector<int>& visit,vector<int>& r,bool& flag)
    {
        visit[n]=1;
        r[n]=1;
        for(int i=0;i<nums[n].size();i++)
        {
            if(visit[nums[n][i]]==0)
                dfs(nums[n][i],nums,visit,r,flag);
            
            else if(visit[nums[n][i]]==1 && r[nums[n][i]]==0)
                continue;
            
            else
            {cout<<"\n"<<n;
                flag=1;
                return ;
            }
        }
        r[n]=0;
    }
    
    bool canFinish(int courses, vector<vector<int>>& s) {
        vector<vector<int>> nums(courses);
        for(int i=0;i<s.size();i++)
            nums[s[i][1]].push_back(s[i][0]);
        
        bool flag=false;
        vector<int> visit(courses,0),r(courses,0);
        
        for(int i=0;i<courses;i++)
        {   
            
            if(visit[i]==0)
                dfs(i,nums,visit,r,flag);
            if(flag)
                return false;
        }
        return true;
    }
};