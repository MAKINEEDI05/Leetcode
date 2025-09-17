class Solution {
public:
    bool fun(char a,int row,int col,vector<vector<char>>& board){
        int i=0,j=col,n=9;
        for(i=0;i<n;i++){
            if(board[i][j]==a){
                return 0;
            }
        }
        i=row;
        for(j=0;j<n;j++){
            if(board[i][j]==a){
                return 0;
            }
        }
        int start=(row/3)*3,stop=(col/3)*3;
        for(i=start;i<start+3;i++){
            for(j=stop;j<stop+3;j++){
                if(board[i][j]==a){
                    return 0;
                }
            }
        }
        return 1;
    }
    bool solve(int row,int col,vector<vector<char>>& board){
        if(row==9){
            return 1;
        }
        if(col==9){
            return solve(row+1,0,board);
        }
        if(board[row][col]!='.'){
            return solve(row,col+1,board);
        }
        int a=0,i=row,j=col,n=9;
        for(a=0;a<n;a++){
            char A='1'+a;
            if(fun(A,i,j,board)){
                board[i][j]=A;
                if(solve(i,j+1,board)) return 1;
                board[i][j]='.';
            }
        }
        return 0;
    }
    void solveSudoku(vector<vector<char>>& board) {
        solve(0,0,board);
    }
};