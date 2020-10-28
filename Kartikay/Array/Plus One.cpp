class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int last=digits[digits.size()-1]+1;
        
        for (int i=digits.size()-1;i>=0;i--){
            
            int ele=digits[i];
            if((ele+1)==10){
                cout << "1";
                if(i==0){
                    cout << "11";
                    digits[i]=0;
                    digits.insert(digits.begin(),1);
                }
                else{
                digits[i]=0;}
                // digits[i-1]+=1;
            }
            else{
                digits[i]+=1;
                break;
            }
        }
        return digits;
    }
};
