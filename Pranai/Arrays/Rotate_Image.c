void rotate(int** matrix, int matrixSize, int* matrixColSize){
    int i,j;
    int mat[matrixSize][matrixSize];
    for(i=0;i<matrixSize;i++){
        for(j=0;j<matrixSize;j++)
            mat[j][i] = matrix[i][j];
    }
   int m=0,n=matrixSize-1;
    for(i=0;i<matrixSize/2;i++){
        for(j=0;j<matrixSize;j++){
            int t = mat[j][m];
            mat[j][m] = mat[j][n];
            mat[j][n] = t;
           // printf("%d\n",t);
        }
        m++;
        n--;
    }
    for(i=0;i<matrixSize;i++){
        for(j=0;j<matrixSize;j++)
            matrix[i][j] = mat[i][j];
    }
   //printf("%d",matrixSize);
}
