void moveZeroes(int* nums, int numsSize){
    int i,j,zcount=0,index=0;
    for(i=0;i<numsSize;i++){
        if(nums[i]==0){
            zcount++;
            continue;
        }
        nums[index]=nums[i];
        index++;
    }
    for(i=0;i<zcount;i++){
        nums[index]=0;
        index++;
    }
}
