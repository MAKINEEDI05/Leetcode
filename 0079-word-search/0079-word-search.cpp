class Solution {
public:
    bool fun(vector<vector<char>>& board,vector<vector<int>>& vis,string word,int i,int j,int k,int n,int m){
        if(i<0 || j<0 || i>=n || j>=m || vis[i][j]==1) return false;
        if(board[i][j]==word[k] && k==word.size()-1) return true;
        if(board[i][j]==word[k]){
            vis[i][j]=1;
            k=k+1;
            bool left=fun(board,vis,word,i+1,j,k,n,m);
            if(left) return 1;
            bool right=fun(board,vis,word,i-1,j,k,n,m);
            if(right) return 1;
            bool top=fun(board,vis,word,i,j-1,k,n,m);
            if(top) return 1;
            bool down=fun(board,vis,word,i,j+1,k,n,m);
            if(down) return 1;
            vis[i][j]=0;
        }
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int i=0,j=0,k=0;
        int n=board.size(),m=board[0].size();
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(board[i][j]==word[0]){
                    vector<vector<int>> vis(n,vector<int>(m,0));
                    bool ans=fun(board,vis,word,i,j,k,n,m);
                    if(ans) return ans;
                }
            }
        }
        return false;
    }
};