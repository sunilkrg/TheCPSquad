class NumArray {
public:
    vector<int> sum;
    NumArray(vector<int>& n) {
        if(n.size()>0){
            sum.push_back(n[0]);
        }
        for(int i=1;i<n.size();i++){
            sum.push_back(sum[i-1]+n[i]);
        }
    }
    
    int sumRange(int i, int j) {
        if(i==0){
            return sum[j];
        }
        return sum[j]-sum[i-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(i,j);
 */