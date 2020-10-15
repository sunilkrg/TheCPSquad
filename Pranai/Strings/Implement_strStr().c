int strStr(char * haystack, char * needle){
    if(strlen(needle)==0)
        return 0;
    if(strlen(haystack)<strlen(needle))
        return -1;
    int i,j=0,index=-1,tot=0,flag=0,j1=1;
    for(i=0;i<strlen(haystack);i++){
        if(haystack[i]==needle[j]){
            if(flag==0)
                index=i;
            j++;
            flag=1;
          //  printf("%d ",j);
        }
        if(j==strlen(needle))
            break;
        if(flag){
            if(j1!=j){
                i=index;
                index=-1;
                j1=0;
                j=0;
                flag=0;
            }
            j1++; 
        }
    }
    if(j==strlen(needle))
        return index;
    return -1;
}
