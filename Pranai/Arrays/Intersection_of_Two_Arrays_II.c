int* intersect(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize){
    if(nums1Size>=nums2Size){
        int i,j,m=0;
        int *arr = (int*)malloc(nums2Size*sizeof(int));
        for(i=0;i<nums1Size;i++){
            for(j=0;j<nums2Size;j++){
                if(nums1[i]==nums2[j]){
                    arr[m]=nums2[j];
                    m++;
                    nums2[j]=-1;
                    break;
                }
            }
        }
    *returnSize = m;
    return arr;
    }
    else{
        int i,j,m=0;
        int *arr = (int*)malloc(nums1Size*sizeof(int));
        for(i=0;i<nums2Size;i++){
            for(j=0;j<nums1Size;j++){
                if(nums2[i]==nums1[j]){
                    arr[m]=nums1[j];
                    m++;
                    nums1[j]=-1;
                    break;
                }
            }
        }
        *returnSize = m;
        return arr;
    }
}
