//https://leetcode.com/explore/featured/card/top-interview-questions-easy/102/math/878/

class Solution {
public:
    int romanToInt(string s) {
        int roman[100];
        roman['I']=1;
        roman['V']=5;
        roman['X']=10;
        roman['L']=50;
        roman['C']=100;
        roman['D']=500;
        roman['M']=1000;
    
        
        int prev=0,res=0,val;
        for(auto i:s){
            val=roman[i];
            res+=val;
            if(prev<val){
                res-=2*prev;
            }
            prev=val;
         }            
       return res;
    }
};
