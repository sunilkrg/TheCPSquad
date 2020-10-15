//https://leetcode.com/explore/featured/card/top-interview-questions-easy/127/strings/884/

class Solution {
public:
    int myAtoi(string str) {
        long long  y=0;
        int j=0;
        int s=1;
        while(str[j]==' ')
            j++;
        if(str[j]=='-')
            s=-1,j++;
        else if(str[j]=='+')
            s=1,j++;
        else
            s=1;
        if((str[j]<'0'|| str[j]>'9'))
            return 0;
              
        for( j;j<str.length();j++){
            
            if(str[j]>='0' && str[j]<='9')
            y=(y*10)+(str[j]-'0');
            else 
                break;
            if(str[j]=='.')
                return y;
            if(y>INT_MAX)break;
        }
        
        y=s*y;   
        if(y<INT_MIN)
            return INT_MIN;
        else if(y>INT_MAX)
            return INT_MAX;
        
        else
            return y;
        
    }
};
