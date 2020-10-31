class Solution {
public:
    vector<int> dpf;
    vector<int> dpl;
    int robfirst(vector<int> numsf,int i){
        if(i>=numsf.size()){
            return 0;
        }
        else{
            if(dpf[i+1]==-1){
                dpf[i+1]=robfirst(numsf,i+1);
            }
            if(dpf[i+2]==-1){
                dpf[i+2]=robfirst(numsf,i+2);
            }
            dpf[i]=max(numsf[i]+dpf[i+2],dpf[i+1]);
            return dpf[i];
        }
    }
    int roblast(vector<int> numsl,int i){
        if(i>=numsl.size()){
            return 0;
        }
        else{
            if(dpl[i+1]==-1){
                dpl[i+1]=roblast(numsl,i+1);
            }
            if(dpl[i+2]==-1){
                dpl[i+2]=roblast(numsl,i+2);
            }
            dpl[i]=max(numsl[i]+dpl[i+2],dpl[i+1]);
            return dpl[i];
        }
    }
    int rob(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        else if(nums.size()==2){
            return max(nums[0],nums[1]);
        }
        vector<int> numsf,numsl;
        for(int i=0;i<nums.size();i++){
            if(i==0){
                numsf.push_back(nums[i]);
            }
            else if(i==nums.size()-1){
                numsl.push_back(nums[i]);
            }
            else{
                numsf.push_back(nums[i]);
                numsl.push_back(nums[i]);
            }
        }
        dpf.clear();
        dpf.resize(nums.size()+10,-1);
        dpl.clear();
        dpl.resize(nums.size()+10,-1);
        int v1=robfirst(numsf,0);
        int v2=roblast(numsl,0);
        return max(v1,v2);
        
    }
};