int singleNumber(int* nums, int numsSize){
    int sum=0,i;
    for(i=0;i<numsSize;i++)
        sum=sum^nums[i];
    return sum;
}
