int removeDuplicates(int* nums, int numsSize){    
    int i,j;
    for(i=1;i<numsSize;i++){
        if(nums[i]==nums[i-1]){
            for(j=i+1;j<numsSize;j++)
                nums[j-1] = nums[j];
            numsSize--;
            i--;
        }
    }
    return numsSize;
}
