void rotate(int* nums, int numsSize, int k){
    if(k>numsSize)
        k-=numsSize;
    if(k>0){
    int a[k],i,j=0;
    for(i=0;i<k;i++)
        a[i]=0;
    for(i=numsSize-k;i<numsSize;i++){
        a[j]=nums[i];
        j++;
    }
    for(i=numsSize-k-1;i>=0;i--)
        nums[i+k]=nums[i];
    
    for(i=0;i<k;i++)
        nums[i]=a[i];
    }
}
