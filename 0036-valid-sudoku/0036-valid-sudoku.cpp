class Solution {
public:
    int fun(int n,int m,vector<vector<char>>& board){
        int i=n,j=m;
        map<char,int> A;
        for(i=n;i<n+3;i++){
            for(j=m;j<m+3;j++){
                if(board[i][j]=='.'){
                    continue;
                }
                if(A[board[i][j]]==1){
                    return 0;
                }
                A[board[i][j]]++;
            }
        }
        return 1;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        int a=0,n=9,m=9,i=0,j=0;
        for(auto i:board){
            map<char,int> C;
            for(auto j:i){
                if(j=='.'){
                    continue;
                }
                if(C[j]==1){
                    return 0;
                }
                C[j]++;
            }
        }
        for(i=0;i<9;i++){
            map<char,int> C;
            for(j=0;j<9;j++){
                if(board[j][i]=='.'){
                    continue;
                }
                if(C[board[j][i]]==1){
                    return 0;
                }
                C[board[j][i]]++;
            }
        }
        int a1=fun(0,0,board) && fun(0,3,board) && fun(0,6,board);
        int a2=fun(3,0,board) && fun(3,3,board) && fun(3,6,board);
        int a3=fun(6,0,board) && fun(6,3,board) && fun(6,6,board);
        return a1 && a2 && a3;
    }
};