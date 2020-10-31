int myAtoi(char * str){
    long i,j,space=0,minus=0,num,sum=0,words=0,plus=0,c=0;
    long max_sum = pow(2,31)-1;
    long min_sum = -pow(2,31);
    for(i=0;i<strlen(str);i++){
        if(*(str+i)==' ' && space==0)
            continue;
        else if(*(str+i)=='-' && c==0){
            minus=1;
            c=1;
            space=1;
        }
        else if(str[i]=='+' && c==0){
            plus=1;
            c=1;
            space=1;
        }
        else if((*(str+i)>=32 && str[i]<=47 || str[i]>=58 && str[i]<=126) && words==0)
            return 0;
        else if(str[i]>=48 && str[i]<=57){
            num = str[i]-48;
            sum = sum*10 + num;
            if(sum>max_sum){
                if(minus==1)
                    return min_sum;
                return max_sum;
            }
            //printf("%d %d\n",num,sum);
            space=1;
            words=1;
            c=1;
        }
        else if(space){
            if(minus==1)
                sum*=-1;
            if(sum>max_sum)
                return max_sum;
            if(sum<min_sum)
                return min_sum;
            return sum;
        }
    }
    if(minus==1)
        sum*=-1;
    if(sum>max_sum)
        return max_sum;
    if(sum<min_sum)
        return min_sum;
    return sum;
}
