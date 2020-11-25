class Solution {
public:
    void dfs(int n,vector<int>& visit,vector<int>& r,vector<vector<int>>& nums,bool& flag)
    {
        visit[n]=1;
        r[n]=1;
        for(int i=0;i<nums[n].size();i++)
        {
            if(visit[nums[n][i]]==0)
                dfs(nums[n][i],visit,r,nums,flag);
            else if(visit[nums[n][i]]==1 && r[nums[n][i]]==0)
            continue;
            else if(visit[nums[n][i]]==1 && r[nums[n][i]]==1)
            {
                flag=1;
                return ;
            }
        }
        r[n]=0;
    }
    vector<int> findOrder(int courses, vector<vector<int>>& s) {
        vector<vector<int>> nums(courses);
        vector<int> indegree(courses,0);
        for(int i=0;i<s.size();i++)
            indegree[s[i][0]]++,nums[s[i][1]].push_back(s[i][0]);
        
        vector<int> visit(courses,0);
        vector<int> r(courses,0),p;
        bool flag=false;
        
        for(int i=0;i<courses;i++)
        {
            if(visit[i]==0)
                dfs(i,visit,r,nums,flag);
        }
        
        if(flag)
            return {};
        queue<int> q;
        for(int i=0;i<courses;i++)
        {
            if(indegree[i]==0)
                q.push(i);
        }
        while(q.size()>0)
        {
            int c=q.front();
            q.pop();
            p.push_back(c);
            for(int i=0;i<nums[c].size();i++)
            {
                indegree[nums[c][i]]--;
                if(indegree[nums[c][i]]==0)
                    q.push(nums[c][i]);
            }
        }
        return p;
    }
};