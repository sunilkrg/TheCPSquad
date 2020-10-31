int* plusOne(int* digits, int digitsSize, int* returnSize){
    int i=digitsSize-1,ll,count=digitsSize,flag=0,n;
    digits[i]++;
    ll = digits[i];
    while(ll==10){
        digits[i]=0;
        i--;
        if(i<0){
            flag=1;
            break;
        }
        digits[i]++;
        ll = digits[i];
    }
    if(flag==0){
        *returnSize = count;
        return digits;
    }
    else{
        n = count+1;
        int *arr = (int*)malloc(n*sizeof(int));
        for(i=n-1;i>0;i--)
            arr[i]=digits[i-1];
        arr[i]=1;
        *returnSize = n;
        return arr;
    }
}
