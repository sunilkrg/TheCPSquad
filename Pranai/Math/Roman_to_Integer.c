int romanToInt(char * s){
    int value(char c){
        if(c=='I')
            return 1;
        else if(c=='V')
            return 5;
        else if(c=='X')
            return 10;
        else if(c=='L')
            return 50;
        else if(c=='C')
            return 100;
        else if(c=='D')
            return 500;
        else 
            return 1000;
    }
    int i,sum=0,val1,val2,n;
    n= strlen(s);
    char c;
    sum+=value(s[n-1]);
    for(i=n-2;i>=0;i--){
        val1 = value(s[i+1]);
        val2 = value(s[i]);
        if(val2>=val1)
            sum+=val2;
        else
            sum-=val2;
    }
    return sum;
}
