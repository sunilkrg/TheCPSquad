int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int i,j,flag=0;
    for(i=0;i<numsSize-1;i++){
        for(j=i+1;j<numsSize;j++){
            if((nums[i]+nums[j])==target){
                nums[0]=i;
                nums[1]=j;
                flag=1;
                break;
            }
        }
        if(flag==1)
            break;
    }
    *returnSize = 2;
    return nums;
}
