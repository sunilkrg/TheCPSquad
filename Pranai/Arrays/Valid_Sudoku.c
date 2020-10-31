bool isValidSudoku(char** board, int boardSize, int* boardColSize){
    int i,j,k;
    for(i=0;i<boardSize;i++){
        for(j=0;j<boardSize;j++){
            if(board[i][j]=='.')
                continue;
            for(k=j+1;k<boardSize;k++){
                if(board[i][j] == board[i][k])
                    return false;
            }
            for(k=i+1;k<boardSize;k++){
                if(board[i][j]==board[k][j])
                    return false;
            }
            int p,q,r=1;
            for(p=0;p<3;p++){
                for(q=0;q<3;q++){
                    if(board[i - i%3 + p][j - j%3 +q]==board[i][j]){
                        if(r==1)
                            r--;
                        else
                            return false;
                    }
                }
            }
        }
    }
    return true;
}
