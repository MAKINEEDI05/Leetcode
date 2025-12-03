class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int a=0,i=0,j=0,n=board.size(),m=board[0].size();
        vector<vector<int>> A(board);
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                int value=0;
                if(i+1<n) value+=A[i+1][j];
                if(i-1>=0) value+=A[i-1][j];
                if(j+1<m) value+=A[i][j+1];
                if(j-1>=0) value+=A[i][j-1];
                if(i+1<n && j+1<m) value+=A[i+1][j+1];
                if(i+1<n && j-1>=0) value+=A[i+1][j-1];
                if(i-1>=0 && j+1<m) value+=A[i-1][j+1];
                if(i-1>=0 && j-1>=0) value+=A[i-1][j-1];
                if(A[i][j]==1){
                    if(value<2) board[i][j]=0;
                    else if(value>=2 && value<=3) board[i][j]=1;
                    else board[i][j]=0;
                }
                else if(value==3){
                    board[i][j]=1;
                }
            }
        }
    }
};