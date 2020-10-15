void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
    int i,j=0,k,p;
    if(n>0){
    for(i=0;i<nums1Size;i++){
        if(nums1[i]>nums2[j]){
            k=nums1Size-2;
            for(p=k;p>=i;p--)
                nums1[p+1]=nums1[p];
            nums1[p+1]=nums2[j];
            j++;
            n--;
            if(n==0)
                break;
        }
    }
    while(n>0){
        nums1[nums1Size-n]=nums2[j];
        n--;
        j++;
    }
 }
}
