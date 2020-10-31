class NumArray {
public:
    vector<int> r;
    NumArray(vector<int>& nums) {
        if(nums.size()==0)
        {cout<<"\nfirst if";
            r.push_back(0);
        }
        if(nums.size()==1)
        {cout<<"\nsecond if";
            r.push_back(nums[0]);
        }
        else if(nums.size()>1)
        {cout<<"\nelse";
        for(int i=0;i<=nums.size();i++)
            r.push_back(0);
        
        r[0]=nums[0];
        for(int i=1;i<nums.size();i++)
            r[i]=r[i-1]+nums[i];
        }
    }
    int sumRange(int i, int j) {
        if(i==0)
        {cout<<"\nif of sumrange: "<<r[j]; 
            return r[j];
        }
        else
        {cout<<"\nelse of sum range";
            return r[j]-r[i-1];
        }
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(i,j);
 */